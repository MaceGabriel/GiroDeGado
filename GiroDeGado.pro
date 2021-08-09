QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cattlebirthscreen.cpp \
    cattlebuyscreen.cpp \
    cattlemanagementscreen.cpp \
    cattleregisterscreen.cpp \
    cattleremovescreen.cpp \
    financialmanagementscreen.cpp \
    financialrecordscreen.cpp \
    financialremovescreen.cpp \
    homescreen.cpp \
    lib/src.cpp \
    main.cpp \
    #test/unit/main.cpp \
    test/unit/unit_cattle.cpp \
    test/unit/unit_farm.cpp \
    test/unit/unit_transaction.cpp

HEADERS += \
    cattlebirthscreen.h \
    cattlebuyscreen.h \
    cattlemanagementscreen.h \
    cattleregisterscreen.h \
    cattleremovescreen.h \
    financialmanagementscreen.h \
    financialrecordscreen.h \
    financialremovescreen.h \
    homescreen.h \
    test/unit/unit_cattle.h \
    test/unit/unit_farm.h \
    test/unit/unit_transaction.h

FORMS += \
    cattlebirthscreen.ui \
    cattlebuyscreen.ui \
    cattleremovescreen.ui \
    cattlemanagementscreen.ui \
    cattleregisterscreen.ui \
    cattleremovescreen.ui \
    financialmanagementscreen.ui \
    financialrecordscreen.ui \
    financialremovescreen.ui \
    homescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    bin/bin.txt
