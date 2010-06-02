QT += opengl
QT -= core \
    gui
CONFIG -= app_bundle

SOURCES += ../main.cpp
INCLUDEPATH +=/home/fliu/bipedCon/release/src/
CONFIG += console
DEFINES+=dDOUBLE
LIBS +=-L/home/fliu/bipedCon/release/src/libs
LIBS += -lPhysicsSim
LIBS += -lmathlib
LIBS +=-lgsl
LIBS +=-lode
LIBS +=-lglUtl
LIBS +=-lCore
LIBS+=-lUtility
LIBS+=-lgslcblas
