#ifndef FOO_HPP
#define FOO_HPP
#include <ExtensionFramework.hpp>

class Foo : public ExtensionFramework
{
public:
	virtual void getReady();
	Foo();
	static int bar(lua_State* L);
	static int HelloWorld(lua_State* L);
	static int HelloName(lua_State* L);
	static int ShowMeYourAddress(lua_State* L);
};

extern "C" {
Foo* CREATE_MODULE();
}

#endif // FOO_HPP
