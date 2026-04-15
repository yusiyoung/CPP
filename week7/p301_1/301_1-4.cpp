#include <iostream>
using namespace std;

class MyTime {
private:
    int hour, min, sec, msec;

public:
    MyTime() { hour = min = sec = msec = 0; }

    void read() {
        cout << "시 입력: ";
        cin >> hour;

        cout << "분 입력: ";
        cin >> min;

        cout << "초 입력: ";
        cin >> sec;

        cout << "밀리초 입력: ";
        cin >> msec;
    }

    void print() {
        cout << hour << "시간 "
             << min << "분 "
             << sec << "초 "
             << msec << "밀리초" << endl;
    }
};

int main() {
    MyTime t;
    t.read();
    t.print();

    return 0;
}