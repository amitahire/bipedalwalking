#include<GL/glew.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include<Physics/AbstractRBEngine.h>
#include<Physics/ArticulatedFigure.h>
#include<Physics/ODEWorld.h>
#include<iostream>
#include <GLUtils/OBJReader.h>
#include <stdio.h>
#include <stdlib.h>
#include "simengine.h"
#include <Core/Character.h>
#include "Point.h"


#include <SDL/SDL.h>

void InitOpenGLDisplay(const int Width,const int Height);
void MyGLInit(const int Width, const int Height);
void drawDots();
void ExitCallback(void);

void SetupCamera(
                                                                 float _left,
                                                                 float _right,
                                                                 float _bottom,
                                                                 float _top,
                                                                 float _near,
                                                                 float _far,
                                                                 Point _eye,
                                                                 Point _look,
                                                                 Point _up
                                                                 )
{
        //make proj current matrix
        glMatrixMode(GL_PROJECTION);
        //set proj to identity matrix
        glLoadIdentity();
        // use glOrtho to set an orthographic projection
        glOrtho(_left,_right,_bottom,_top,_near,_far);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        // use gluLookAt to position the camera
        gluLookAt(_eye.m_x,_eye.m_y,_eye.m_z,_look.m_x,_look.m_y,_look.m_z,_up.m_x,_up.m_y,_up.m_z);
}


//----------------------------------------------------------------------------------------------------------------------
/*! \brief a simple draw grid function
@param[in] _size the size of the grid (width and height)
@param[in] _step sxstep the spacing between grid points */
GLint MakeGrid(
                                                        GLfloat _size,
                                                        int _steps
                                                 )
{
        // allocate enough space for our verts
        // as we are doing lines it will be 2 verts per line
        // and we need to add 1 to each of them for the <= loop
        // and finally muliply by 12 as we have 12 values per line pair
        int dataSize= (_steps+2)*12;
        float *vertexData= new float[dataSize];
        // k is the index into our data set
        int k=-1;
        // claculate the step size for each grid value
  float step=_size/(float)_steps;
  // pre-calc the offset for speed
  float s2=_size/2.0f;
  // assign v as our value to change each vertex pair
  float v=-s2;
  // loop for our grid values
  for(int i=0; i<=_steps; ++i)
  {
                // vertex 1 x,y,z
                vertexData[++k]=-s2; // x
                vertexData[++k]=0.0; // y
                vertexData[++k]=v; // z

                // vertex 2 x,y,z
                vertexData[++k]=s2; // x
                vertexData[++k]=0.0; // y
                vertexData[++k]=v; // z

                // vertex 3 x,y,z
                vertexData[++k]=v;
                vertexData[++k]=0.0;
                vertexData[++k]=-s2;

                // vertex 4 x,y,z
                vertexData[++k]=v;
                vertexData[++k]=0.0;
                vertexData[++k]=s2;
                // now change our step value
                v+=step;
  }


  // now we will create our VBO first we need to ask GL for an Object ID
        GLuint VBOBuffers;
        // now create the VBO
        glGenBuffers(1, &VBOBuffers);
        // now we bind this ID to an Array buffer
        glBindBuffer(GL_ARRAY_BUFFER, VBOBuffers);
        // finally we stuff our data into the array object
        // First we tell GL it's an array buffer
        // then the number of bytes we are storing (need to tell it's a sizeof(FLOAT)
        // then the pointer to the actual data
        // Then how we are going to draw it (in this case Statically as the data will not change)
        glBufferData(GL_ARRAY_BUFFER, dataSize*sizeof(GL_FLOAT) , vertexData, GL_STATIC_DRAW);

        // now we can delete our client side data as we have stored it on the GPU
        delete [] vertexData;
        // now return the VBO Object pointer to our program so we can use it later for drawing
        return VBOBuffers;
}
void InitGlew()
{
        // we only need glew on linux mac ok (should add a windows ref as well)


                GLenum err = glewInit();
                if (GLEW_OK != err)
                {
                        /* Problem: glewInit failed, something is seriously wrong. */
                        std::cerr<< "Error: "<<glewGetErrorString(err)<<std::endl;
                        exit(EXIT_FAILURE);
                }
                std::cerr<<"Status: Using GLEW "<<glewGetString(GLEW_VERSION)<<std::endl;


}
void DrawGrid(GLfloat size, GLfloat step)
 {
 GLint i;
// pre calculate the extents of the grid
GLfloat s=size/2.0;
 // draw grid
 // beging drawing lines
 glBegin(GL_LINES);
 for(i=-s;i<=s;i+=step)
 {
 // lines for the depth (z)
 glVertex3f(i,0,-s);
 glVertex3f(i,0,s);
 // lines for the width (x)
 glVertex3f(s,0,i);
 glVertex3f(-s,0,i);
 }
 glEnd();
 }



void DrawOpenGL(
                                                                GLint _vbo,
                                                                int _vboSize
                                                                )
{
        // clear the screen and set the drawing colour
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glColor3f(1,1,1);
        DrawGrid(8,2);

        // enable  vertex array drawing
        /*
        glEnableClientState(GL_VERTEX_ARRAY);
        // bind our VBO data to be the currently active one
        glBindBuffer(GL_ARRAY_BUFFER, _vbo);
        // tell GL how this data is formated in this case 3 floats tightly packed starting at the begining
        // of the data (0 = stride, 0 = offset)
        glVertexPointer(3,GL_FLOAT,0,0);
        // draw the VBO as a series of GL_LINES starting at 0 in the buffer and _vboSize*GLfloat
        glDrawArrays( GL_LINES, 0, _vboSize*sizeof(GL_FLOAT) );
        // now turn off the VBO client state as we have finished with it
        glDisableClientState(GL_VERTEX_ARRAY);
        */

        //GLUtils::drawSphere(Point3d (0.0,0.0,0.0), 2.0, 5);
        SimEngine::Paint();
        // tell SDL to swap buffers for a re-draw
        SDL_GL_SwapBuffers();
}

static void ProcessEvents(void)
{
SDL_Event event;
while( SDL_PollEvent( &event ) )
{
        switch( event.type )
        {
        /* Look for a keypress */
        case SDL_KEYDOWN:

                /* Check the SDLKey values and move change the coords */
                switch( event.key.keysym.sym )
                {
                    case SDLK_1 :
				{
					SetupCamera(-5,5,-5,5,0.5,20,Point(5,5,5),Point(0,0,0),Point(0,1,0));
					break;
				}
			
				case SDLK_2 :
				{
					SetupCamera(-5,5,-5,5,0.5,20,Point(0,5,0),Point(0,0,0),Point(0,0,1));
					break;
				}
				default : { break; }
                }
        break; // end key down

    case SDL_KEYUP:
        switch( event.key.keysym.sym )
        {
        case SDLK_ESCAPE : exit(EXIT_SUCCESS); break;
        default : break;
        }
    break; // end key up
        case SDL_QUIT : exit(EXIT_SUCCESS); break;
    default: break;
   }// end switch
  } // end while
}


void InitOpenGLDisplay(const int Width,const int Height)
{
const SDL_VideoInfo *info=NULL;
info = SDL_GetVideoInfo();
int bpp = info->vfmt->BitsPerPixel;
int flags=0;

SDL_GL_SetAttribute(SDL_GL_RED_SIZE,8);
SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE,8);
SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE,8);
SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,24);
SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER,1);

flags = SDL_OPENGL | SDL_HWSURFACE ;
if(SDL_SetVideoMode(Width,Height,bpp,flags)==0)
        {
        std::cerr<<"Video Mode Failed\n"<<SDL_GetError();
        exit(EXIT_SUCCESS);
        }

}
void ExitCallback(void)
{
// once we have finished with SDL we must stop the
//sub-systems using the following commands
std::cerr<<"closing down SDL\n";
SDL_Quit();
}


void drawDots()
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glBegin(GL_POINTS);
        glVertex2i(100,50);
        glVertex2i(100,130);
        glVertex2i(150,130);


glEnd();

GLUtils::drawSphere(Point3d (0.0,0.0,0.0), 10.0, 100);
SimEngine::Paint();

SDL_GL_SwapBuffers();
}

int main()
{

    std::cout<<"reading characters"<<std::endl;
    SimEngine::Initilize();  //  af->loadFromFile(fp,world);




int ex = atexit(ExitCallback);
const int Width=1024;
const int Height=768;

if (ex != 0)
        {
    std::cerr<<"cannot set exit function\n";
    return EXIT_FAILURE;
    }

std::cerr<<"Initialising SDL\n";
// before using SDL the various sub-systems must be initialised for now we will do the
// most common ones video and audio
if((SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)== -1))
        {
        // if one of the systems didn't work report the error and exit
        std::cerr<<"Error initializing SDL \n"<<SDL_GetError();
        exit(EXIT_FAILURE);
        }
std::cerr<<"SDL Init done\n";
SDL_WM_SetCaption("Basic GL Window", NULL);


	InitOpenGLDisplay(Width,Height);
       //  InitGlew();

	glClearColor(0.7,0.7,0.7,1.0);
	SetupCamera(-5,5,-5,5,0.5,20,Point(0,5,0),Point(0,0,0),Point(0,0,1));
	SDL_WM_SetCaption("Press 1 or 2 to swap Cameras", NULL);
        float GridSize=8;
        int steps=4;
        GLint VBO;
                //= MakeGrid(GridSize,steps);

while(1)
        {
       // drawDots();
        SimEngine::Step();
        DrawOpenGL(VBO,(steps+2)*12);

        ProcessEvents();
        SDL_Delay(2);
        }

return EXIT_SUCCESS;
}



