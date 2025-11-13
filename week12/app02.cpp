#include <iostream>
#include <new>
using namespace std;

int main()
{
    try {     
        int* p = new int[0xfffffffff];

        delete[] p;
    }
    catch (bad_alloc ex) {
        //cout << "런타임 예외 발생\n";
        cout << ex.what() <<'\n';
    }
    return 0;
}
