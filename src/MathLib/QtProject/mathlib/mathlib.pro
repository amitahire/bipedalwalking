DEFINES += LINUX
TEMPLATE = lib
CONFIG += staticlib
DESTDIR=/home/fliu/bipedCon/release/src/libs

HEADERS += ../../Matrix.h \
    ../../Plane.h \
    ../../Point3d.h \
    ../../Quaternion.h \
    ../../Sphere.h \
    ../../ThreeTuple.h \
    ../../TransformationMatrix.h \
    ../../Vector.h \
    ../../Vector3d.h \
    ../../Capsule.h \
    ../../mathLib.h
SOURCES += ../../Matrix.cpp \
    ../../Plane.cpp \
    ../../Point3d.cpp \
    ../../Quaternion.cpp \
    ../../Sphere.cpp \
    ../../ThreeTuple.cpp \
    ../../TransformationMatrix.cpp \
    ../../Vector.cpp \
    ../../Vector3d.cpp \
    ../../Capsule.cpp
INCLUDEPATH +=/home/fliu/bipedCon/release/src/
