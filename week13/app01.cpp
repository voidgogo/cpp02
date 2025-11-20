#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
	cout << "Generic display : " << value << '\n';
}

template <>  // template specialization
void display<char>(char value) {
	cout << "Specialized display for char : " << value << '\n';
}

template <>  // template specialization
void display<const char*>(const char* value) {
	cout << "Specialized display for c style string : " << value << '\n';
}

int main()
{
	// Generic
	display(2.17);
	display(50);
	// Specialized
	display('2');
	display("2");
	display("Hi");

	return 0;
}
