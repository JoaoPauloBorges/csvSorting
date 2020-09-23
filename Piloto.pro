#-------------------------------------------------
#
# Project created by QtCreator 2016-11-01T19:13:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Piloto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Piloto.cpp \
    Persistencia.cpp \
    TemplateMetodoOrdenacao.cpp \
    OrdenarPorNome.cpp \
    OrdenarPorCodigo.cpp \
    OrdenarPorEquipe.cpp \
    OrdenarPorPais.cpp \
    OrdenarPorCarro.cpp \
    OrdenarPorPontos.cpp

HEADERS  += mainwindow.h \
    Piloto.h \
    ArrayList.h \
    Persistencia.h \
    TemplateMetodoOrdenacao.h \
    OrdenarPorNome.h \
    OrdenarPorCodigo.h \
    OrdenarPorEquipe.h \
    OrdenarPorPais.h \
    OrdenarPorCarro.h \
    OrdenarPorPontos.h

FORMS    += mainwindow.ui
