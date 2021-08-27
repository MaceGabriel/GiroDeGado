QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

LIBS += -L$$quote(C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/api_tests/bin/debug/debug) #Marcus
#LIBS += -L$$quote(C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/Trabalho em grupo/GiroDeGado/api_tests/bin/debug/debug) #Mace
#LIBS += -L$$quote(C:/Programas/git/GiroDeGado/api_tests/bin/debug/debug) #Carlos
LIBS += -l$$quote(api)

SOURCES += \
    main.cpp \
    test/unit/main_unit_test.cpp \
    test/unit/unit_cattle.cpp \
    test/unit/unit_farm.cpp \
    test/unit/unit_transaction.cpp \
    test/unit/unit_user.cpp

HEADERS += \
    ../api/includes/cattle.h \
    ../api/includes/cattleImpl.h \
    ../api/includes/farm.h \
    ../api/includes/farmImpl.h \
    ../api/includes/handlebody.h \
    ../api/includes/transaction.h \
    ../api/includes/transactionImpl.h \
    ../api/includes/user.h \
    ../api/includes/userImpl.h \
    lib_global.h \
    test/unit/main_unit_test.h \
    test/unit/unit_cattle.h \
    test/unit/unit_farm.h \
    test/unit/unit_transaction.h \
    test/unit/unit_user.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    bd_giro_tests.db
