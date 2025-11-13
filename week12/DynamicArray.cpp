#include <iostream>
#include "DynamicArray.h"
#include "MyException.h"
#include "MyMemoryException.h"
#include "MyIndexOutOfBoundException.h"
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
		//throw "메모리 오류 발생\n";
		//throw MyMemoryException(1000, "메모리 오류 발생", this);
	}
	catch (...) {
		delete[] ptr;
		cout << "힙메모리 해제 (생성자 안쪽)\n";

		throw;
	}	
}

int DynamicArray::getAt(int index)
{
	if (index >= size || index < 0)
		throw MyIndexOutOfBoundException(4885, "인덱스 범위를 벗어났습니다. 메모리에 접근할 수 없습니다.", this);
	return ptr[index];
}

void DynamicArray::setAt(int index, int value)
{
	if (index >= size || index < 0)
		throw MyIndexOutOfBoundException(4886, "인덱스 범위를 벗어났습니다. 메모리에 할당 할 수 없습니다.", this);;
	ptr[index] = value;
}

DynamicArray::~DynamicArray()
{
	cout << "동적배열 메모리 해제\n";
	delete[] ptr;
}

