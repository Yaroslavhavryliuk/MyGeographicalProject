QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    atmosphere.cpp \
    babineproblem.cpp \
    fallsloperiver.cpp \
    formsandsizesofearth.cpp \
    hydrology.cpp \
    lithosphere.cpp \
    localtime.cpp \
    main.cpp \
    mainwindow.cpp \
    maps.cpp \
    pointantipode.cpp \
    relativeheight.cpp \
    scale.cpp \
    tempontheheight.cpp \
    timetasks.cpp \
    visibility.cpp

HEADERS += \
    atmosphere.h \
    babineproblem.h \
    fallsloperiver.h \
    formsandsizesofearth.h \
    hydrology.h \
    lithosphere.h \
    localtime.h \
    mainwindow.h \
    maps.h \
    pointantipode.h \
    relativeheight.h \
    scale.h \
    tempontheheight.h \
    timetasks.h \
    visibility.h

FORMS += \
    atmosphere.ui \
    babineproblem.ui \
    fallsloperiver.ui \
    formsandsizesofearth.ui \
    hydrology.ui \
    lithosphere.ui \
    localtime.ui \
    mainwindow.ui \
    maps.ui \
    pointantipode.ui \
    relativeheight.ui \
    scale.ui \
    tempontheheight.ui \
    timetasks.ui \
    visibility.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
