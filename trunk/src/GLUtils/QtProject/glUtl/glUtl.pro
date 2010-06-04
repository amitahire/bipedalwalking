QT += opengl 
DEFINES += LINUX
TEMPLATE = lib
CONFIG += staticlib
DESTDIR=../../../libs
HEADERS += ../../GLCamera.h \
    ../../GLMesh.h \
    ../../GLTexture.h \
    ../../GLUtils.h \
    ../../OBJReader.h
SOURCES += ../../GLCamera.cpp \
    ../../GLMesh.cpp \
    ../../GLTexture.cpp \
    ../../GLUtils.cpp \
    ../../OBJReader.cpp

INCLUDEPATH +=../../../
