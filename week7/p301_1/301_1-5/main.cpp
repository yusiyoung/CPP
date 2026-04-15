#include <iostream>
#include "MyTime.h"
using namespace std;

int main() {
    MyTime t1, t2, t3;

    cout << "첫 번째 시간 입력" << endl;
    t1.read();

    cout << "두 번째 시간 입력" << endl;
    t2.read();

    cout << "\n첫 번째 시간: ";
    t1.print();

    cout << "두 번째 시간: ";
    t2.print();

    t3 = t1.add(t2);
    cout << "더한 결과: ";
    t3.print();

    t3.reset();
    cout << "초기화 결과: ";
    t3.print();

    return 0;
}