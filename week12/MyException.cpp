#include "MyException.h"

MyException::MyException(int ec, const char* em, DynamicArray* ea)
	: errorCode(ec), errorMessage(em), errorAddress(ea)
{
	//cout << "예외 객체 생성\n";
}
