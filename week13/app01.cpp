#include <iostream>
using namespace std;

template <typename T>
void swap(T* first, T* second)
{
	T temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	int i1 = 11;
	int i2 = 76;
	swap(&i1, &i2);
	cout << i1 << "  " << i2 << endl;
	
	double d1 = 51.5;
	double d2 = 42.7;
	swap(&d1, &d2);
	cout << d1 << "  " << d2 << endl;
	return 0;
}