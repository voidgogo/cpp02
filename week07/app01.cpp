#include <iostream>
using namespace std;

class UndergraduateStudent{
public:
	void warn() { cout << "학사경고\n"; };
};
class DormitoryStudent{
public:
	void warn() { cout << "벌점부여\n"; };
};
class UndergraduateDormitoryStudent 
	: public UndergraduateStudent, public DormitoryStudent{
};
int main() {
	UndergraduateDormitoryStudent uds;
	//uds.warn();  // 다중상속시 어느 부모의 warn함수를 호출할지 모호함
	uds.DormitoryStudent::warn();
	return 0;
}