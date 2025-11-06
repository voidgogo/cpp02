#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{
    DynamicArray da1(5);

    try {
        da1.setAt(0, 100);
        da1.setAt(4, -11);
        //da1.setAt(10, 9);  // !
        da1.setAt(-3, 21); // !

        cout << da1.getAt(4) << endl;
        cout << da1.getAt(0) << endl;
        //cout << da1.getAt(7) << endl;  // !
    }
    catch (int err) {
        cout << "ÀÎµ¦½º ¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù\n";
    }

    return 0;
}
