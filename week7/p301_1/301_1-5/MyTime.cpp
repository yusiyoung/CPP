#include <iostream>
#include <iomanip>
#include "MyTime.h"
using namespace std;

MyTime::MyTime() {
    hour = 0;
    min = 0;
    sec = 0;
    msec = 0;
}

void MyTime::convert(double duration) {
    int totalMsec = (int)(duration * 1000 + 0.5);

    hour = totalMsec / 3600000;
    totalMsec %= 3600000;

    min = totalMsec / 60000;
    totalMsec %= 60000;

    sec = totalMsec / 1000;
    msec = totalMsec % 1000;
}

void MyTime::print() {
    cout << setfill('0')
         << setw(2) << hour << ":"
         << setw(2) << min << ":"
         << setw(2) << sec << ":"
         << setw(3) << msec << endl;
}

MyTime MyTime::add(MyTime t) {
    MyTime result;

    int total1 = hour * 3600000 + min * 60000 + sec * 1000 + msec;
    int total2 = t.hour * 3600000 + t.min * 60000 + t.sec * 1000 + t.msec;
    int sum = total1 + total2;

    result.hour = sum / 3600000;
    sum %= 3600000;

    result.min = sum / 60000;
    sum %= 60000;

    result.sec = sum / 1000;
    result.msec = sum % 1000;

    return result;
}

void MyTime::reset() {
    hour = min = sec = msec = 0;
}

void MyTime::read() {
    cout << "시 입력: ";
    cin >> hour;
    cout << "분 입력: ";
    cin >> min;
    cout << "초 입력: ";
    cin >> sec;
    cout << "밀리초 입력: ";
    cin >> msec;
}