#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	void makeSound() { cout << "µ¿¹°ÀÌ ¼Ò¸®¸¦ ³À´Ï´Ù...\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "¸Û¸Û!\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "³Ä¿Ë~\n"; }
};

int main()
{
	Animal a;
	Dog d;
	cout << typeid(d).name() << endl;
	d.makeSound();
	return 0;
}