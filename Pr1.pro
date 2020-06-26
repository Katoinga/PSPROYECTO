QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Aerolinea.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Aeropuerto.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Asiento.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Avion.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Boleto.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Pasajero.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Persona.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Piloto.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/PuertaEmbarque.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Vendedor.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Ventanilla.h \
    ../../../Descargas/PSPROYECTO-master/PSPROYECTO-master/Cabezeras/Vuelo.h \
    Aerolinea.h \
    Aeropuerto.h \
    Asiento.h \
    Avion.h \
    Boleto.h \
    Pasajero.h \
    Persona.h \
    Piloto.h \
    PuertaEmbarque.h \
    Vendedor.h \
    Ventanilla.h \
    Vuelo.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
