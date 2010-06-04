#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "glwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_gl=new GLWindow(ui->s_GLFrame);
    connect(ui->m_rotX, SIGNAL(valueChanged(int)),  this,   SLOT(RotateGL()));
    connect(ui->m_rotY, SIGNAL(valueChanged(int)),  this,   SLOT(RotateGL()));
    connect(ui->m_rotZ, SIGNAL(valueChanged(int)),  this,   SLOT(RotateGL()));
    connect(ui->m_objectChoice,SIGNAL(currentIndexChanged(int)),this,SLOT(SetObject(int)));
    connect(ui->m_scale,SIGNAL(valueChanged(double)),this,SLOT(SetScale(double)));
    connect(ui->m_color,SIGNAL(clicked()),this,SLOT(ChangeColour()));
    connect(ui->m_wireFrame,SIGNAL(clicked()),this,SLOT(ChangeDrawMode()));

    setFocusPolicy(Qt::StrongFocus);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::RotateGL()
{
m_gl->RotateGL(-ui->m_rotX->value(),ui->m_rotY->value(),ui->m_rotZ->value());
m_gl->updateGL();
}
void MainWindow::SetObject(int _object)
{
m_gl->SetObject(_object);
m_gl->updateGL();
}
void MainWindow::SetScale(double _scale)
{
m_gl->SetScale(_scale);
m_gl->updateGL();
}

void MainWindow::ChangeColour()
{
QColor colour=QColorDialog::getColor();
    if(colour.isValid())
    {
        m_gl->SetColour(colour.redF(),colour.greenF(),colour.blueF());
        m_gl->updateGL();

    }
}
void MainWindow::keyPressEvent(QKeyEvent* _event)
{
    switch(_event->key())
    {
        case Qt::Key_Up:    {m_gl->MoveCamera(0,-0.1,0);    break;}
        case Qt::Key_Down:  {m_gl->MoveCamera(0,0.1,0);     break;}
        case Qt::Key_Left:  {m_gl->MoveCamera(0.1,0,0);     break;}
        case Qt::Key_I:     {m_gl->MoveCamera(0,0,0.1);     break;}
        case Qt::Key_O:     {m_gl->MoveCamera(0,0,-0.1);    break;}

    }
    m_gl->updateGL();
}
