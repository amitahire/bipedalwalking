#include "glwindow.h"
#include <iostream>
#include "ngl/Camera.h"
#include "ngl/NGLInit.h"
#include "ngl/Vector.h"
#include "ngl/VBOPrimitives.h"
#include <Console/simengine.h>


GLWindow::GLWindow(QWidget *_parent):QGLWidget(_parent)
{

    setFocus();
    this->resize(_parent->size());
    m_rotate=false;
    m_spinXFace=0;
    m_spinYFace=0;
    m_xRot=0.0;
    m_yRot=0.0;
    m_zRot=0.0;

    m_object=0;
    m_scale=1.0;
    m_wireFrame=true;
}
void GLWindow::initializeGL()
{
ngl::Vector eye(2,2,2);
ngl::Vector look(0,0,0);
ngl::Vector up(0,1,0.1);

m_cam=new ngl::Camera(eye,look,up,ngl::PERSPECTIVE);
m_cam->SetShape(90,(float)780.0/576.0,0.4,20,ngl::PERSPECTIVE);
//set the colour to white
m_colour.Set(1,1,1);

ngl::NGLInit *Init=ngl::NGLInit::Instance();
Init->InitGlew();
Init->InitVBOandImageLib();
ngl::VBOPrimitives* prim=ngl::VBOPrimitives::Instance();
prim->CreateVBOSphere("sphere",0.5,50);

glEnable(GL_LIGHTING);
glShadeModel(GL_SMOOTH);
glEnable(GL_DEPTH_TEST);
glClearColor(0.5,0.5,0.5,1.0);
glEnable(GL_LIGHT0);
float pos[]={2,2,2,1};
glLightfv(GL_LIGHT0,GL_POSITION,pos);

glEnable(GL_COLOR_MATERIAL);
glColorMaterial(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE);


SimEngine::Initilize();
}
void GLWindow::resizeGL(int _w, int  _h)
{
    glViewport(0,0,_w,_h);
}
void GLWindow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    m_cam->Use();
    glPushMatrix();
        glRotated(  (GLdouble) m_spinXFace,  1.0,0.0,0.0);
        glRotated(  (GLdouble) m_spinYFace, 0.0,1.0,0.0);
        glPushMatrix();

                glRotatef(m_xRot,1,0,0);
                glRotatef(m_yRot,0,1,0);
                glRotatef(m_zRot,0,0,1);
                glPushMatrix();

                    /*
                    m_colour.Use();
                    glScalef(m_scale,m_scale,m_scale);
                    ngl::VBOPrimitives *prim=ngl::VBOPrimitives::Instance();
                    if(m_wireFrame==true)
                    {
                        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
                    }
                    else
                    {
                        glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
                    }
                    switch(m_object)
                    {
                        case 0:{prim->DrawVBO("teapot");break;}
                        case 1:{prim->DrawVBO("sphere");break;}
                        case 2:{prim->DrawVBO("cube");break;}
                    }
                    */

                std::cout<<"paint the rigid body"<<std::endl;
                SimEngine::Paint();

                glPopMatrix();
         glPopMatrix();

    glPopMatrix();
}
void GLWindow::mouseMoveEvent(QMouseEvent *_event)
{
if(m_rotate&&_event->buttons()==Qt::LeftButton)
  {
    m_spinYFace =(int)(m_spinYFace+(_event->x()-m_origX) ) % 360;
    m_spinYFace =(int)(m_spinYFace+(_event->y()-m_origY) ) % 360;
    m_origX=_event->x();
    m_origY=_event->y();
   }
updateGL();
}
void GLWindow::mousePressEvent(QMouseEvent *_event)
{
    if(_event->button()==Qt::LeftButton)
    {
        m_origX=_event->x();
        m_origY=_event->y();
        m_rotate=true;
    }
}
void GLWindow::mouseReleaseEvent(QMouseEvent *_event)
{
    if(_event->button()==Qt::LeftButton)
    {
        m_rotate=false;
    }
}
void GLWindow::RotateGL(float _x,float _y,float _z)
{
    m_xRot=_x;
    m_yRot=_y;
    m_zRot=_z;
}
void GLWindow::MoveCamera   (float _x,
                             float _y,
                             float _z
                             )
{
    m_cam->Slide(_x,_y,_z);
}
void GLWindow::ToggleWireframe()
{
m_wireFrame^=true;
updateGL();
}
