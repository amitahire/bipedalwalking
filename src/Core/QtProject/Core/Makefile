#############################################################################
# Makefile for building: libCore.a
# Generated by qmake (2.01a) (Qt 4.5.2) on: Fri Jun 4 15:42:07 2010
# Project:  Core.pro
# Template: lib
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile Core.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DLINUX -DdDOUBLE -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -fPIC -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -fPIC -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I../../.. -I../../../ode-0.9/include -I.
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../../BalanceFeedback.cpp \
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
OBJECTS       = BalanceFeedback.o \
		BaseControlFramework.o \
		Character.o \
		Controller.o \
		ConUtils.o \
		PoseController.o \
		SimBiConFramework.o \
		SimBiConState.o \
		SimBiController.o \
		SimGlobals.o \
		Trajectory.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/staticlib.prf \
		/usr/share/qt4/mkspecs/features/static.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		Core.pro
QMAKE_TARGET  = Core
DESTDIR       = ../../../libs/
TARGET        = libCore.a

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile ../../../libs/$(TARGET) 

staticlib: ../../../libs/$(TARGET)

../../../libs/$(TARGET):  $(OBJECTS) $(OBJCOMP) 
	@$(CHK_DIR_EXISTS) ../../../libs/ || $(MKDIR) ../../../libs/ 
	-$(DEL_FILE) $(TARGET)
	$(AR) $(TARGET) $(OBJECTS)
	-$(DEL_FILE) ../../../libs/$(TARGET)
	-$(MOVE) $(TARGET) ../../../libs/


Makefile: Core.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/staticlib.prf \
		/usr/share/qt4/mkspecs/features/static.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile Core.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/staticlib.prf:
/usr/share/qt4/mkspecs/features/static.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile Core.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Core1.0.0 || $(MKDIR) .tmp/Core1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Core1.0.0/ && $(COPY_FILE) --parents ../../BalanceFeedback.h ../../BaseControlFramework.h ../../Character.h ../../Controller.h ../../ConUtils.h ../../PoseController.h ../../SimBiConFramework.h ../../SimBiConState.h ../../SimBiController.h ../../SimGlobals.h ../../Trajectory.h .tmp/Core1.0.0/ && $(COPY_FILE) --parents ../../BalanceFeedback.cpp ../../BaseControlFramework.cpp ../../Character.cpp ../../Controller.cpp ../../ConUtils.cpp ../../PoseController.cpp ../../SimBiConFramework.cpp ../../SimBiConState.cpp ../../SimBiController.cpp ../../SimGlobals.cpp ../../Trajectory.cpp .tmp/Core1.0.0/ && (cd `dirname .tmp/Core1.0.0` && $(TAR) Core1.0.0.tar Core1.0.0 && $(COMPRESS) Core1.0.0.tar) && $(MOVE) `dirname .tmp/Core1.0.0`/Core1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Core1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

BalanceFeedback.o: ../../BalanceFeedback.cpp ../../BalanceFeedback.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BalanceFeedback.o ../../BalanceFeedback.cpp

BaseControlFramework.o: ../../BaseControlFramework.cpp ../../BaseControlFramework.h \
		../../Character.h \
		../../SimGlobals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BaseControlFramework.o ../../BaseControlFramework.cpp

Character.o: ../../Character.cpp ../../Character.h \
		../../SimGlobals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Character.o ../../Character.cpp

Controller.o: ../../Controller.cpp ../../Controller.h \
		../../Character.h \
		../../SimGlobals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Controller.o ../../Controller.cpp

ConUtils.o: ../../ConUtils.cpp ../../ConUtils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ConUtils.o ../../ConUtils.cpp

PoseController.o: ../../PoseController.cpp ../../PoseController.h \
		../../Character.h \
		../../SimGlobals.h \
		../../ConUtils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o PoseController.o ../../PoseController.cpp

SimBiConFramework.o: ../../SimBiConFramework.cpp ../../SimBiConFramework.h \
		../../BaseControlFramework.h \
		../../Character.h \
		../../SimGlobals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SimBiConFramework.o ../../SimBiConFramework.cpp

SimBiConState.o: ../../SimBiConState.cpp ../../SimBiConState.h \
		../../ConUtils.h \
		../../SimGlobals.h \
		../../SimBiController.h \
		../../PoseController.h \
		../../Character.h \
		../../BaseControlFramework.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SimBiConState.o ../../SimBiConState.cpp

SimBiController.o: ../../SimBiController.cpp ../../SimBiController.h \
		../../PoseController.h \
		../../Character.h \
		../../SimGlobals.h \
		../../BaseControlFramework.h \
		../../SimBiConState.h \
		../../ConUtils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SimBiController.o ../../SimBiController.cpp

SimGlobals.o: ../../SimGlobals.cpp ../../SimGlobals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SimGlobals.o ../../SimGlobals.cpp

Trajectory.o: ../../Trajectory.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Trajectory.o ../../Trajectory.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

