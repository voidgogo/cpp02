#include <iostream>
#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size)
{
	cout << "동적배열 생성됨\n";
	ptr = new int[size];
}

DynamicArray::~DynamicArray()
{
	cout << "동적배열 메모리 해제\n";
	delete[] ptr;
}

int DynamicArray::getAt(int index)
{
	return ptr[index];
}

void DynamicArray::setAt(int index, int value)
{
	ptr[index] = value;
}
