QT += opengl
QT -= core \
    gui
CONFIG -= app_bundle

SOURCES += ../main.cpp
INCLUDEPATH +=../../
CONFIG += console
DEFINES+=dDOUBLE
LIBS +=-L../../libs
LIBS += -lPhysicsSim
LIBS += -lmathlib
LIBS +=-lgsl
LIBS +=-lode
LIBS +=-lglUtl
LIBS +=-lCore
LIBS+=-lUtility
LIBS+=-lgslcblas
