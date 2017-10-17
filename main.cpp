#include <iostream>
#include "Counter.h"

using namespace std;

int main() {
    Counter c1;
    Counter c2(99);
    CountDn c3;
    cout<<"C1 count is: "<<c1.getCount()<<endl;
    ++c2;
    cout<<"C2 count is: "<<c2.getCount()<<endl;
    ++c3;
    ++c3;
    --c3;
    cout<<"C3 count is: "<<c3.getCount()<<endl;
    CountDn c4(50);
    cout<<"C4 count is: "<<c4.getCount()<<endl;
    return 0;
}