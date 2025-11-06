#include <iostream>
#include "DynamicArray.h"
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
        cout << da1.getAt(7) << endl;  // !
    }
    catch (int err) {
        cout << "인덱스 범위를 벗어났습니다\n";
    }
    catch (const char* err) {
        cout << "메모리 오류\n";
        cout << "에러코드 : " << err;
    }

    return 0;
}
