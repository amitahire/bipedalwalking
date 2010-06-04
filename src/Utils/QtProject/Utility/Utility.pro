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
DESTDIR=../../../libs
INCLUDEPATH +=../../../
INCLUDEPATH +=../../../include
