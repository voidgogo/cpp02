#include <iostream>
using namespace std;

class Person {  
public:
	string name;
	//virtual void warn() = 0;
};
class UndergraduateStudent : virtual public Person{
public:
	double gpa;
	void warn() { cout << "�л���\n"; };
};
class DormitoryStudent : virtual public Person {
public:
	int roomNumber;
	void warn() { cout << "�����ο�\n"; };
};
class UndergraduateDormitoryStudent 
	: public UndergraduateStudent, public DormitoryStudent{
};
int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn();  // ���߻�ӽ� ��� �θ��� warn�Լ��� ȣ������ ��ȣ��
	uds.DormitoryStudent::warn();
	uds.gpa = 3.9;
	uds.roomNumber = 201;
	uds.name = "Kim";  // ���� �θ�Ŭ������ �Ҿƹ��� Ŭ������ ��ӹ��� �� virtual Ű���带 �̿��ؼ� ������ ���̾Ƹ�� ������ �ذ�

	cout << uds.name << "�� ������ " << uds.gpa << "�̰�, ����� ���ȣ�� " << uds.roomNumber << "ȣ �Դϴ�\n";
	return 0;
}