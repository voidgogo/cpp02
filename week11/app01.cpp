#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{
    DynamicArray da1(5);

    da1.setAt(0, 100);
    da1.setAt(4, -11);

    cout << da1.getAt(4) << endl;

    return 0;
}
