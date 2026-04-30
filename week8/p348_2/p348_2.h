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
    MyTime(int h, int m, int s, int ms);
    MyTime(double duration);

    void convert(double duration); 
    void print();                 
    MyTime add(MyTime t);          
    void reset();                  
    void read();                   
};

#endif