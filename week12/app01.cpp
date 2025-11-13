#include <iostream>
#include "DynamicArray.h"
#include "MyException.h"
using namespace std;

int main()
{
    try {
        DynamicArray da1(5);

        da1.setAt(0, 100);
        da1.setAt(4, -11);
        //da1.setAt(10, 9);  // !
        //da1.setAt(-3, 21); // !

        cout << da1.getAt(4) << endl;
        cout << da1.getAt(0) << endl;
        //cout < endl;
        cout << da1.getAt(7) << endl;  // !
    }
    catch (const MyException& err) {
        cout << "에러코드 : " << err.getErrorCode() << '\n';
        cout << "에러메세지 : " << err.getErrorMessage() << '\n';
        cout << "에러 메모리 번지 주소 : " << err.getErrorAddress() << '\n';

    }
    catch (...) {
        cout << "런타임 예외 발생\n";
    }

    return 0;
}
