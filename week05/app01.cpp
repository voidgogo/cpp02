#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;
class Animal {
public:
	virtual void makeSound() { cout << "µ¿¹°ÀÌ ¼Ò¸®¸¦ ³À´Ï´Ù...\n"; }
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
	Animal* pa = new Dog();
	pa->makeSound();
	cout << pa << endl;

	Cat* pc = (Cat*)pa;  // Dangerous behavior!!!
	pc->makeSound();
	cout << pc << endl;
	delete pc;
	pc = nullptr;

	//Dog* pd = (Dog*)pa;  // downcasting, old style (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa);  // downcasting, modern style (C++11)
	//pd->makeSound();
	//delete pd;
	//pd = nullptr;

	return 0;
}
// git reset --hard HEAD~»èÁ¦ÇÒÄ¿¹Ô°³¼ö