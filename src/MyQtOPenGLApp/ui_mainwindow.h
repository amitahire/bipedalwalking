/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Apr 26 15:24:42 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *m_color;
    QComboBox *m_objectChoice;
    QLabel *s_scaleLabel;
    QCheckBox *m_wireFrame;
    QDoubleSpinBox *m_scale;
    QFrame *s_GLFrame;
    QGroupBox *groupBox_2;
    QSlider *m_rotX;
    QSlider *m_rotY;
    QSlider *m_rotZ;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(511, 459);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(380, 210, 123, 184));
        m_color = new QPushButton(groupBox);
        m_color->setObjectName(QString::fromUtf8("m_color"));
        m_color->setGeometry(QRect(17, 58, 85, 28));
        m_objectChoice = new QComboBox(groupBox);
        m_objectChoice->setObjectName(QString::fromUtf8("m_objectChoice"));
        m_objectChoice->setGeometry(QRect(17, 25, 77, 27));
        s_scaleLabel = new QLabel(groupBox);
        s_scaleLabel->setObjectName(QString::fromUtf8("s_scaleLabel"));
        s_scaleLabel->setGeometry(QRect(0, 90, 35, 18));
        m_wireFrame = new QCheckBox(groupBox);
        m_wireFrame->setObjectName(QString::fromUtf8("m_wireFrame"));
        m_wireFrame->setGeometry(QRect(17, 150, 97, 23));
        m_scale = new QDoubleSpinBox(groupBox);
        m_scale->setObjectName(QString::fromUtf8("m_scale"));
        m_scale->setGeometry(QRect(40, 90, 63, 26));
        m_scale->setMinimum(-99);
        m_scale->setValue(1);
        s_GLFrame = new QFrame(centralWidget);
        s_GLFrame->setObjectName(QString::fromUtf8("s_GLFrame"));
        s_GLFrame->setGeometry(QRect(0, -10, 371, 401));
        s_GLFrame->setFrameShape(QFrame::StyledPanel);
        s_GLFrame->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 0, 101, 201));
        groupBox_2->setCheckable(true);
        m_rotX = new QSlider(groupBox_2);
        m_rotX->setObjectName(QString::fromUtf8("m_rotX"));
        m_rotX->setGeometry(QRect(17, 25, 17, 90));
        m_rotX->setMinimum(-180);
        m_rotX->setMaximum(180);
        m_rotX->setOrientation(Qt::Vertical);
        m_rotY = new QSlider(groupBox_2);
        m_rotY->setObjectName(QString::fromUtf8("m_rotY"));
        m_rotY->setGeometry(QRect(40, 25, 17, 90));
        m_rotY->setMinimum(-180);
        m_rotY->setMaximum(180);
        m_rotY->setOrientation(Qt::Vertical);
        m_rotZ = new QSlider(groupBox_2);
        m_rotZ->setObjectName(QString::fromUtf8("m_rotZ"));
        m_rotZ->setGeometry(QRect(63, 25, 17, 90));
        m_rotZ->setMinimum(-180);
        m_rotZ->setMaximum(180);
        m_rotZ->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 511, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Object", 0, QApplication::UnicodeUTF8));
        m_color->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        m_objectChoice->clear();
        m_objectChoice->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Teapot", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Sphere", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cube", 0, QApplication::UnicodeUTF8)
        );
        s_scaleLabel->setText(QApplication::translate("MainWindow", "Scale", 0, QApplication::UnicodeUTF8));
        m_wireFrame->setText(QApplication::translate("MainWindow", "Wireframe", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Rotate", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
