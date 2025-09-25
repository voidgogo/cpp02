#include <iostream>
using namespace std;

class Person {
public:
	string name;
	virtual void warn() = 0;
};
class UndergraduateStudent : public Person{
public:
	double gpa;
	void warn() { cout << "학사경고\n"; };
};
class DormitoryStudent : public Person {
public:
	int roomNumber;
	void warn() { cout << "벌점부여\n"; };
};
class UndergraduateDormitoryStudent 
	: public UndergraduateStudent, public DormitoryStudent{
};
int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn();  // 다중상속시 어느 부모의 warn함수를 호출할지 모호함
	uds.DormitoryStudent::warn();
	uds.gpa = 3.9;
	uds.roomNumber = 201;
	//uds.name = "Kim";  // Error. 죽음의 다이아몬드 문제
	return 0;
}