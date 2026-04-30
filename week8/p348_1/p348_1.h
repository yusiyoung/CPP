#ifndef MYTIME_H
#define MYTIME_H

#include <iostream>
using namespace std;

class MyTime {
private:
    int hour;
    int min;
    int sec;

public:
    MyTime();
    MyTime(int h, int m, int s);

    void convert(double duration); // 초 → 시:분:초
    void print();                  // 출력
    MyTime add(MyTime t);          // 시간 더하기
    void reset();                  // 0으로 초기화
    void read();                   // 입력
};

#endif