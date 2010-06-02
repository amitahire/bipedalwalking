DEFINES += LINUX
TEMPLATE = lib
CONFIG += staticlib
HEADERS += ../../BalanceFeedback.h \
    ../../BaseControlFramework.h \
    ../../Character.h \
    ../../Controller.h \
    ../../ConUtils.h \
    ../../PoseController.h \
    ../../SimBiConFramework.h \
    ../../SimBiConState.h \
    ../../SimBiController.h \
    ../../SimGlobals.h \
    ../../Trajectory.h
SOURCES += ../../BalanceFeedback.cpp \
    ../../BaseControlFramework.cpp \
    ../../Character.cpp \
    ../../Controller.cpp \
    ../../ConUtils.cpp \
    ../../PoseController.cpp \
    ../../SimBiConFramework.cpp \
    ../../SimBiConState.cpp \
    ../../SimBiController.cpp \
    ../../SimGlobals.cpp \
    ../../Trajectory.cpp

DEFINES+=dDOUBLE
DESTDIR=/home/fliu/bipedCon/release/src/libs

INCLUDEPATH +=/home/fliu/bipedCon/release/src/
INCLUDEPATH +=/home/fliu/bipedCon/release/src/ode-0.9/include
