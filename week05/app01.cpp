#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	void makeSound() { cout << "������ �Ҹ��� ���ϴ�...\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "�۸�!\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "�Ŀ�~\n"; }
};

int main()
{
	Animal a;
	Dog d;
	cout << typeid(d).name() << endl;
	d.makeSound();
	return 0;
}