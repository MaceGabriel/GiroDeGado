QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cattlemanagementscreen.cpp \
    cattleregisterscreen.cpp \
    cattleremovescreen.cpp \
    homescreen.cpp \
    lib/src.cpp \
    main.cpp \
    #test/unit/main.cpp \
    test/unit/unit_cattle.cpp

HEADERS += \
    cattlemanagementscreen.h \
    cattleregisterscreen.h \
    cattleremovescreen.h \
    homescreen.h \
    test/unit/unit_cattle.h

FORMS += \
    cattlemanagementscreen.ui \
    cattleregisterscreen.ui \
    cattleremovescreen.ui \
    homescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    bin/bin.txt
