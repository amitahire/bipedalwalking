QT += opengl
QT -= core \
    gui
CONFIG -= app_bundle
SOURCES += ../main.cpp \
    ../simengine.cpp
INCLUDEPATH += ../../
CONFIG += console
DEFINES += dDOUBLE
LIBS += -L../../libs
LIBS += -lPhysicsSim
LIBS += -lmathlib
LIBS += -lgsl
LIBS += -lode
LIBS += -lglUtl
LIBS += -lCore
LIBS += -lUtility
LIBS += -lgslcblas
LIBS += -lGLEW
HEADERS += ../simengine.h \
    ../Point.h

# shell out and run sdl-config for the libs
unix:LIBS += `sdl-config \
    --libs \
    --static-libs`

# and the same for the C++ flags
unix:QMAKE_CXXFLAGS += `sdl-config \
    --cflags`
