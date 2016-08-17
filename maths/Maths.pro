# -*- makefile -*-

QT       += core network

MOC_DIR = moc
OBJECTS_DIR = obj
TARGET   = QtMaths
CONFIG   += console debug

QMAKE_CLEAN += $$MOC_DIR/* $$OBJECTS_DIR/*

QMAKE_CXXFLAGS += -Wall -Werror

SOURCES += main.cpp

HEADERS +=
