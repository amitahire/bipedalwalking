#ifndef GLWINDOW_H
#define GLWINDOW_H


#ifdef USING_GLEW
#include "GL/glew.h"
#endif

#include <QWidget>
#include <QtOpenGL>
#include "ngl/Camera.h"
#include "ngl/Colour.h"

class GLWindow : public QGLWidget
{
    Q_OBJECT

public:
    GLWindow(QWidget* _parent);
    void RotateGL(
            const float _x,
            const float _y,
            const float _z
            );
    inline void SetObject(
            const int _o){m_object=_o;}
    inline void SetScale(
            const float _s
            ){m_scale=_s;}
    inline void SetColour(const float _r,
                          const float _g,
                          const float _b)
    {m_colour.Set(_r,_g,_b);}

    void ToggleWireframe();
    void MoveCamera(const float _x,
                    const float _y,
                    const float _z);
 private:
    int m_spinXFace;
    int m_spinYFace;
    int m_rotate;
    float m_origX;
    float m_origY;

    ngl::Camera *m_cam;
    float m_xRot;
    float m_yRot;
    float m_zRot;

    int m_object;
    float m_scale;

    ngl::Colour m_colour;
    bool m_wireFrame;

 protected:
    void initializeGL();
    void resizeGL(const int _w,
                  const int _h
                  );
    void paintGL();
 private:
    void mouseMoveEvent(QMouseEvent * __event);
    void mousePressEvent(QMouseEvent *_event);
    void mouseReleaseEvent(QMouseEvent *_event);

};

#endif // GLWINDOW_H
