DEFINES += LINUX
TEMPLATE = lib
CONFIG += staticlib
DEFINES+=dDOUBLE
DESTDIR=/home/fliu/bipedCon/release/src/libs
HEADERS += ../../AbstractRBEngine.h \
    ../../ArticulatedFigure.h \
    ../../ArticulatedRigidBody.h \
    ../../BallInSocketJoint.h \
    ../../BoxCDP.h \
    ../../CapsuleCDP.h \
    ../../CollisionDetectionPrimitive.h \
    ../../ContactPoint.h \
    ../../HingeJoint.h \
    ../../Joint.h \
    ../../ODEWorld.h \
    ../../PlaneCDP.h \
    ../../PreCollisionQuery.h \
    ../../RBProperties.h \
    ../../RBState.h \
    ../../RBUtils.h \
    ../../RigidBody.h \
    ../../SphereCDP.h \
    ../../UniversalJoint.h
SOURCES += ../../AbstractRBEngine.cpp \
    ../../ArticulatedFigure.cpp \
    ../../ArticulatedRigidBody.cpp \
    ../../BallInSocketJoint.cpp \
    ../../BoxCDP.cpp \
    ../../CapsuleCDP.cpp \
    ../../CollisionDetectionPrimitive.cpp \
    ../../HingeJoint.cpp \
    ../../Joint.cpp \
    ../../ODEWorld.cpp \
    ../../PlaneCDP.cpp \
    ../../PreCollisionQuery.cpp \
    ../../RBProperties.cpp \
    ../../RBState.cpp \
    ../../RBUtils.cpp \
    ../../RigidBody.cpp \
    ../../SphereCDP.cpp \
    ../../UniversalJoint.cpp
INCLUDEPATH +=/home/fliu/bipedCon/release/src/

