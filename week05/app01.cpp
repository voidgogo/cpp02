#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;
class Animal {
public:
	virtual void makeSound() { cout << "������ �Ҹ��� ���ϴ�...\n"; }
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
	Animal* pa = new Dog();
	pa->makeSound();
	cout << pa << endl;

	//Cat* pc = (Cat*)pa;  // Dangerous behavior!!!
	//Cat* pc = dynamic_cast<Cat*>(pa);  // SAFE. �����Ŭ������ �����Ͱ� ������Ŭ������ �޸� �����ּҸ� ���� �� ���� (NULL �� ����)
	Dog* pc = dynamic_cast<Dog*>(pa);  // ���� �Ҵ�� ������Ŭ���� ��ü�� �޸� ���� �ּҸ� �޴´�
	cout << pc << endl;
	pc->makeSound();	
	delete pc;
	pc = nullptr;

	//Dog* pd = (Dog*)pa;  // downcasting, old style (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa);  // downcasting, modern style (C++11)
	//pd->makeSound();
	//delete pd;
	//pd = nullptr;

	return 0;
}
// git reset --hard HEAD~������Ŀ�԰���