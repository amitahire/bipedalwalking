#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QColorDialog>
#include "glwindow.h"


namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void keyPressEvent(QKeyEvent *_event);
private slots:
    void RotateGL();
    void SetObject(int _object);
    void SetScale(double _scale);
    void ChangeColour();
    void ChangeDrawMode(){m_gl->ToggleWireframe();}


private:
    Ui::MainWindow *ui;
    GLWindow* m_gl;
};

#endif // MAINWINDOW_H
