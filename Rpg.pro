TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        dataclass.cpp \
        elf.cpp \
        fight.cpp \
        hero.cpp \
        knight.cpp \
        logger.cpp \
        mag.cpp \
        main.cpp

HEADERS += \
    dataclass.h \
    elf.h \
    fight.h \
    hero.h \
    knight.h \
    logger.h \
    mag.h
