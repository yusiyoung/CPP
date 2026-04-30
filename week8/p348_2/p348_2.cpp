#include "MyTime.h"
#include <iostream>
#include <iomanip>
using namespace std;

MyTime::MyTime() {
    hour = min = sec = msec = 0;
}

MyTime::MyTime(int h, int m, int s, int ms) {
    hour = h;
    min = m;
    sec = s;
    msec = ms;
}

MyTime::MyTime(double duration) {
    convert(duration);
}

void MyTime::convert(double duration) {
    int total = (int)duration;

    hour = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;

    msec = (int)((duration - total) * 1000);
}

void MyTime::print() {
    cout << setfill('0')
         << setw(2) << hour << ":"
         << setw(2) << min << ":"
         << setw(2) << sec << ":"
         << setw(3) << msec << endl;
}

MyTime MyTime::add(MyTime t) {
    double total1 = hour * 3600 + min * 60 + sec + msec / 1000.0;
    double total2 = t.hour * 3600 + t.min * 60 + t.sec + t.msec / 1000.0;

    return MyTime(total1 + total2);
}

void MyTime::reset() {
    hour = min = sec = msec = 0;
}

void MyTime::read() {
    cout << "시 분 초 ms 입력: ";
    cin >> hour >> min >> sec >> msec;
}