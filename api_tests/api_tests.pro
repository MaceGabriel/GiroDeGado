QT       += core sql
QT       -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

#LIBS += -L$$quote(C:/Users/marcu/Downloads/UFOP/Engenharia/Projeto/GiroDeGado/api_tests/bin/debug/debug) #Marcus
#LIBS += -L$$quote(C:/Users/Gabriel Mace/Desktop/Faculdade/20.2/Engenharia de Software/Trabalho em grupo/GiroDeGado/api_tests/bin/debug/debug) #Mace
#LIBS += -L$$quote(C:/Programas/git/GiroDeGado/api_tests/bin/debug/debug) #Carlos
#LIBS += -l$$quote(api)

LIBS += -L$$PWD/bin/debug/debug/ -lapi
LIBS += -L$$PWD/bin/debug/release/ -lapi
LIBS += -L$$PWD/bin/debug/ -lapi

SOURCES += \
    main.cpp

HEADERS += \
    ../api/test/unit/main_unit_test.h \
    lib_global.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    bd_giro_tests.db
