QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    entity/cattlebirthscreen.cpp \
    entity/cattlebuyscreen.cpp \
    entity/cattlemanagementscreen.cpp \
    entity/cattleregisterscreen.cpp \
    entity/cattleremovescreen.cpp \
    entity/financialmanagementscreen.cpp \
    entity/financialrecordscreen.cpp \
    entity/financialremovescreen.cpp \
    entity/homescreen.cpp \
    lib/cattleImpl.cpp \
    lib/farmImpl.cpp \
    lib/transactionImpl.cpp \
    main.cpp \
    test/unit/main_unit_test.cpp \
    test/unit/unit_cattle.cpp \
    test/unit/unit_farm.cpp \
    test/unit/unit_transaction.cpp

HEADERS += \
    entity/cattlebirthscreen.h \
    entity/cattlebuyscreen.h \
    entity/cattlemanagementscreen.h \
    entity/cattleregisterscreen.h \
    entity/cattleremovescreen.h \
    entity/financialmanagementscreen.h \
    entity/financialrecordscreen.h \
    entity/financialremovescreen.h \
    entity/homescreen.h \
    includes/cattle.h \
    includes/cattleImpl.h \
    includes/farm.h \
    includes/farmImpl.h \
    includes/handlebody.h \
    includes/transaction.h \
    includes/transactionImpl.h \
    test/unit/unit_cattle.h \
    test/unit/unit_farm.h \
    test/unit/unit_transaction.h

FORMS += \
    views/cattlebirthscreen.ui \
    views/cattlebuyscreen.ui \
    views/cattlemanagementscreen.ui \
    views/cattleregisterscreen.ui \
    views/cattleremovescreen.ui \
    views/financialmanagementscreen.ui \
    views/financialrecordscreen.ui \
    views/financialremovescreen.ui \
    views/homescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    bin/bin.txt
