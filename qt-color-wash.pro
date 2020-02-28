QT += core gui widgets

TARGET = color-wash
TEMPLATE = app

SOURCES += \
    main.cpp \
    ColorWashWidget.cpp

HEADERS += ColorWashWidget.h

target.path += /usr/bin
INSTALLS += target
