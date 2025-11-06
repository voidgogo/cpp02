#pragma once
class DynamicArray {
private:
	int* ptr;
	int size;
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();
};