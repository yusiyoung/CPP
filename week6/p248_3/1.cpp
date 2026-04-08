#include "addTime.h"

MyTime addTime(MyTime t1, MyTime t2)
{
    MyTime result;

    result.sec = t1.sec + t2.sec;
    result.min = t1.min +t2.min + result.sec / 60;
    result.sec %= 60;

    result.hour = t1.hour + t2.hour + result.min / 60;
    result.min %= 60;

    return result;
}
int main()
{
    MyTime t1, t2, result;

    std::cout <<" 첫 번째 시간 입력 (시 분 초): ";
    std::cin >> t1.hour >> t2.min >> t1.sec;

    stc::cout << "두 번쨰 시간 입력 (시 분 초): ";
    std::cin >> t2.hour >> t2.min >> t2.sec;

    result = addTime(t1, t2);

    std::cout << "결과: "
              << result.hour << ":"
              << result.min << ":"
              << result.sec << std::endl;

    return 0;
}