TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ClassBinaryStreamWrapper/binarystreamwrapper.cpp \
    ClassContainer/container.cpp \
    ClassContainer/ClassTextContainer/textcontainer.cpp

HEADERS += \
    ClassBinaryStreamWrapper/binarystreamwrapper.hpp \
    ClassContainer/container.h \
    ClassContainer/ClassTextContainer/textcontainer.h
