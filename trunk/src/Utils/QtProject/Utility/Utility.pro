TEMPLATE = lib
CONFIG += staticlib
HEADERS += ../../BMPIO.h \
    ../../Image.h \
    ../../ImageIO.h \
    ../../Timer.h \
    ../../Utils.h
SOURCES += ../../BMPIO.cpp \
    ../../Image.cpp \
    ../../ImageIO.cpp \
    ../../Timer.cpp \
    ../../Utils.cpp
DESTDIR=/home/fliu/bipedCon/release/src/libs
INCLUDEPATH +=/home/fliu/bipedCon/release/src/
INCLUDEPATH +=/home/fliu/bipedCon/release/src/include
