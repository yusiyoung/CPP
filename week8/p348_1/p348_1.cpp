#include "MyTime.h"
#include <iomanip>

MyTime::MyTime() {
    hour = min = sec = 0;
}

MyTime::MyTime(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
}

void MyTime::convert(double duration) {
    int total = (int)duration;
    hour = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;
}

void MyTime::print() {
    cout << setfill('0')
         << setw(2) << hour << ":"
         << setw(2) << min << ":"
         << setw(2) << sec << endl;
}

MyTime MyTime::add(MyTime t) {
    MyTime result;

    int total1 = hour * 3600 + min * 60 + sec;
    int total2 = t.hour * 3600 + t.min * 60 + t.sec;

    result.convert(total1 + total2);
    return result;
}

void MyTime::reset() {
    hour = min = sec = 0;
}

void MyTime::read() {
    cout << "시, 분, 초를 입력하세요: ";
    cin >> hour >> min >> sec;
}


