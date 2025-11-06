#pragma once
class DynamicArray {
private:
	int* ptr;
	int size;
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();

	int getAt(int index);
	void setAt(int index, int value);
};