#pragma once
#include <iostream>
#include "DynamicArray.h"
using namespace std;

class MyException {
private:
	int errorCode;
	const char* errorMessage;
	DynamicArray* errorAddress;  // has-a
public:
	MyException(int ec, const char* em, DynamicArray* ea);
	virtual ~MyException();
	int getErrorCode() const;
	const char* getErrorMessage() const;
	DynamicArray* getErrorAddress() const;
};