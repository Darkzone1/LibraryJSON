#include <stdio.h>
#include <iostream>
#include "..\inc\Value_Json.h"
#include <list>
#include <cstdlib>

template<class T>
value_Json::value_Json(T type_Value)
{
	add_Value(type_Value);
}

value_Json::~value_Json()
{
	free(value);
}

template<class T>
void value_Json::add_Value(T type_Value)
{
 	value = type_Value;
}

int value_Json::delete_Value()
{
	~value_Json();
}

template<class T> T value_Json::obtained_Value()
{
	return this value;
}
