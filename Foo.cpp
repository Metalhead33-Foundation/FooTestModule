#include "Foo.hpp"
#include <iostream>

Foo::Foo()
	: ExtensionFramework("foo","_foo")
{

}
void Foo::getReady()
{
	uploadFunction("bar",bar);
	uploadFunction("HelloWorld",HelloWorld);
	uploadFunction("HelloName",HelloName);
	uploadFunction("ShowMeYourAddress",ShowMeYourAddress);
}
int Foo::bar(lua_State* L)
{
	std::cout << "Bar, bar, bar, this is a C++ function named Bar." << std::endl;
	return 0;
}
int Foo::HelloWorld(lua_State* L)
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}
int Foo::HelloName(lua_State* L)
{
	std::string name;
	std::cout << "Please enter your name: ";
	std::cin >> name;
	std::cout << "Hello " << name << std::endl;
	return 0;
}
int Foo::ShowMeYourAddress(lua_State* L)
{
	std::cout << "This function's address is [" << reinterpret_cast<void*>(ShowMeYourAddress) << "]" << std::endl;
	lua_pushinteger(L,reinterpret_cast<size_t>(ShowMeYourAddress));
	return 1;
}
Foo* CREATE_MODULE()
{
	return new Foo();
}
