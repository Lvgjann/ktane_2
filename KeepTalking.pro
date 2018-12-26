TEMPLATE = app

CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += usr/include/SDL2/

LIBS += `sdl-config --libs`

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra

SOURCES += main.cpp \
    module3.cpp \
    module2.cpp \
    module1.cpp \
    module4.cpp \
    module5.cpp \
    module6.cpp \
    module7.cpp \
    needy3.cpp \
    module8.cpp \
    module9.cpp \
    module10.cpp \
    module11.cpp \
    needy1.cpp \
    needy2.cpp \
    _Outils.cpp \
    _Instructions.cpp \
    _Appli.cpp

HEADERS += \
    module3.h \
    module10.h \
    module1.h \
    module2.h \
    module4.h \
    module5.h \
    module6.h \
    module7.h \
    module8.h \
    needy3.h \
    module9.h \
    module11.h \
    needy1.h \
    needy2.h \
    _Outils.h \
    _Headers.h \
    _Instructions.h \
    _Appli.h \
    _Updates.h
