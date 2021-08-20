QT       += core gui widgets testlib sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
LIBS += -L$$quote(C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/Trabalho em grupo/GiroDeGado/gui_tests/bin/debug/debug) #Mace
#LIBS += -L$$quote(C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/gui_tests/bin/debug/debug) #Marcus
LIBS += -l$$quote(api)

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../gui/entity/cattlebirthscreen.cpp \
    ../gui/entity/cattlebuyscreen.cpp \
    ../gui/entity/cattleconsultscreen.cpp \
    ../gui/entity/cattleeditscreen.cpp \
    ../gui/entity/cattlemanagementscreen.cpp \
    ../gui/entity/cattleregisterscreen.cpp \
    ../gui/entity/cattleremovescreen.cpp \
    ../gui/entity/financialconsultscreen.cpp \
    ../gui/entity/financialmanagementscreen.cpp \
    ../gui/entity/financialrecordscreen.cpp \
    ../gui/entity/financialremovescreen.cpp \
    ../gui/entity/homescreen.cpp \
    main.cpp \
    test/unit/cattle_birth_unit_test.cpp \
    test/unit/cattle_buy_unit_test.cpp \
    test/unit/cattle_consult_unit_test.cpp \
    test/unit/cattle_edit_unit_test.cpp \
    test/unit/cattle_management_unit_test.cpp \
    test/unit/cattle_register_unit_test.cpp \
    test/unit/cattle_remove_unit_test.cpp \
    test/unit/financial_consult_unit_test.cpp \
    test/unit/financial_management_unit_test.cpp \
    test/unit/financial_record_unit_test.cpp \
    test/unit/financial_remove_unit_test.cpp \
    test/unit/home_unit_test.cpp

HEADERS += \
    ../gui/entity/cattlebirthscreen.h \
    ../gui/entity/cattlebuyscreen.h \
    ../gui/entity/cattleconsultscreen.h \
    ../gui/entity/cattleeditscreen.h \
    ../gui/entity/cattlemanagementscreen.h \
    ../gui/entity/cattleregisterscreen.h \
    ../gui/entity/cattleremovescreen.h \
    ../gui/entity/financialconsultscreen.h \
    ../gui/entity/financialmanagementscreen.h \
    ../gui/entity/financialrecordscreen.h \
    ../gui/entity/financialremovescreen.h \
    ../gui/entity/homescreen.h \
    lib_global.h

FORMS += \
    ../gui/views/cattlebirthscreen.ui \
    ../gui/views/cattlebuyscreen.ui \
    ../gui/views/cattleconsultscreen.ui \
    ../gui/views/cattleeditscreen.ui \
    ../gui/views/cattlemanagementscreen.ui \
    ../gui/views/cattleregisterscreen.ui \
    ../gui/views/cattleremovescreen.ui \
    ../gui/views/financialconsultscreen.ui \
    ../gui/views/financialmanagementscreen.ui \
    ../gui/views/financialrecordscreen.ui \
    ../gui/views/financialremovescreen.ui \
    ../gui/views/homescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../gui/bd_giro_tests.db
