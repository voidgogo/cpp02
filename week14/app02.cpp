//#include <vector>
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    //vector<int> vec(10);
//    vector<int> vec;
//    vector<int>::iterator iter;
//    vector<int>::reverse_iterator rIter;
//    
//    for (int i = 0; i < 10; i++)
//    {
//        //vec.at(i) = i * i;
//        //vec[i] = i * i;
//        vec.push_back(i * i);
//    }
//    // 기본 반복자로 요소 출력
//    cout << "기본 탐색: ";
//    for (iter = vec.begin(); iter != vec.end(); ++iter)
//    {
//        cout << setw(4) << *iter;
//    }
//    cout << endl;
//    
//    vec.pop_back();
//
//    cout << "역 탐색: ";
//    for (rIter = vec.rbegin(); rIter != vec.rend(); ++rIter)
//    {
//        cout << setw(4) << *rIter;
//    }
//    cout << endl;
//    iter = vec.begin();
//    iter = iter + 3;
//    cout << *iter << '\n';
//    rIter = vec.rbegin();
//    rIter = rIter + 6;
//    cout << *rIter << '\n';
//    return 0;
//}