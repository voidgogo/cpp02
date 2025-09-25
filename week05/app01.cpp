#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;
class Animal {
public:
	virtual void makeSound() { cout << "동물이 소리를 냅니다...\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "멍멍!\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "냐옹~\n"; }
};
int main()
{
	Animal* pa = new Dog();
	pa->makeSound();
	cout << pa << endl;

	//Cat* pc = (Cat*)pa;  // Dangerous behavior!!!
	//Cat* pc = dynamic_cast<Cat*>(pa);  // SAFE. 고양이클래스의 포인터가 강아지클래스의 메모리 번지주소를 받을 수 없다 (NULL 값 리턴)
	Dog* pc = dynamic_cast<Dog*>(pa);  // 힙에 할당된 강아지클래스 객체의 메모리 번지 주소를 받는다
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
// git reset --hard HEAD~삭제할커밋개수