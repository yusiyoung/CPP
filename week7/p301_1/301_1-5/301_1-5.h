#ifndef MYTIME_H
#define MYTIME_H

class MyTime {
private:
    int hour;
    int min;
    int sec;
    int msec;

public:
    MyTime();
    void convert(double duration);
    void print();
    MyTime add(MyTime t);
    void reset();
    void read();
};

#endif