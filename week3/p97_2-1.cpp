#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int 만 = num / 10000;
    int 천 = (num % 10000) / 1000;
    int 백 = (num % 1000) / 100;
    int 십 = (num % 100) / 10;
    int 일 = num % 10;

    std::cout << 만 << "만 ";
    std::cout << 천 << "천 ";
    std::cout << 백 << "백 ";
    std::cout << 십 << "십 ";
    std::cout << 일 << std::endl;

    return 0;
}