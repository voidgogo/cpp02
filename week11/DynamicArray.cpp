#include <iostream>
#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) : size(size)
{
	try {
		//this->size = size;	
		ptr = new int[size];
		cout << "동적배열 생성됨\n";
		throw "4885\n";
	}
	catch (...) {
		delete[] ptr;
		cout << "힙메모리 해제 (생성자 안쪽)\n";

		throw;
	}	
}

DynamicArray::~DynamicArray()
{
	cout << "동적배열 메모리 해제\n";
	delete[] ptr;
}

int DynamicArray::getAt(int index)
{
	if (index >= size || index < 0)
		throw 1;
	return ptr[index];
}

void DynamicArray::setAt(int index, int value)
{
	if (index >= size || index < 0)
		throw 0;
	ptr[index] = value;
}
