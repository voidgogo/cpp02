#pragma once
class MyException {
private:
	int errorCode;
	const char* errorMessage;
	const MyException* errorAddress;

};