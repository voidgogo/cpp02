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
