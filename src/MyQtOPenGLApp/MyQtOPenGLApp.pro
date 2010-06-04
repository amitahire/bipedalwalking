# -------------------------------------------------
# Project created by QtCreator 2010-04-22T15:58:27
# -------------------------------------------------
QT += opengl
TARGET = MyQtOPenGLApp
TEMPLATE = app
CONFIG -= app_bundle
OBJECTS_DIR = ./OBJ
SOURCES += main.cpp \
    mainwindow.cpp \
    glwindow.cpp \
    ../Console/simengine.cpp
HEADERS += mainwindow.h \
    glwindow.h \
    ../Console/simengine.h
FORMS += mainwindow.ui
DEFINES += USING_QT_CREATOR
DEFINES += NGL_QT_GUI_APP
DEFINES += NGL_DEBUG
IMAGE_LIB = USE_MAGICK
contains(IMAGE_LIB, USE_MAGICK) { 
    message("Using MAGIC")
    unix:DEFINES += USE_MAGICK
    unix:LIBS += `Magick++-config \
        --ldflags \
        --libs`
    unix:QMAKE_CXXFLAGS += `Magick++-config \
        --cppflags`
}
unix:LIBS += `sdl-config \
    --libs \
    --static-libs`
unix:QMAKE_CXXFLAGS += `sdl-config \
    --cflags`
linux-g++ { 
    DEFINES += USING_GLEW
    DEFINES += LINUX
    LIBS += -lGLEW
}
INCLUDEPATH += $$(HOME)/GraphicsLib/include/
LIBS += -L$$(HOME)/GraphicsLib/lib
LIBS += -lngl
INCLUDEPATH += ../
DEFINES += dDOUBLE
LIBS += -L../libs
LIBS += -lPhysicsSim
LIBS += -lmathlib
LIBS += -lgsl
LIBS += -lode
LIBS += -lglUtl
LIBS += -lCore
LIBS += -lUtility
LIBS += -lgslcblas
