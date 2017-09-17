TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
include(ext/luamodulaloader2/qmake_modules/findLuaJIT.pro)
LIBS += -L"$$_PRO_FILE_PWD_/ext/luamodulaloader2/build/" -lLuaLibLoader2
# LIBS += "$$_PRO_FILE_PWD_/ext/Physfs4Cpp/build/libPhysfs4Cpp.so"
INCLUDEPATH += ext/luamodulaloader2

SOURCES += main.cpp \
    Foo.cpp

HEADERS += \
    Foo.hpp
