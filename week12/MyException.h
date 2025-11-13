#pragma once
#include <iostream>
#include "DynamicArray.h"
using namespace std;

class MyException {
private:
	int errorCode;
	const char* errorMessage;
	DynamicArray* errorAddress;
public:
	MyException(int ec, const char* em, DynamicArray* ea);
};