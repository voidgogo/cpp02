#pragma once
#include "MyException.h"

class MyIndexOutOfBoundException : public MyException {
public:
	MyIndexOutOfBoundException(int ec, DynamicArray* ea);
};