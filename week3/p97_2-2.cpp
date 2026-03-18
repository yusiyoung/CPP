#include <iostream>

int main()
{
    int num;
    std:: cin >> num;

    int 만 = num / 10000;
    int 천 = (num % 10000) / 1000;
    int 백 = (num % 1000) / 100;
    int 십 = (num % 100) / 10;
    int 일 = num % 10;

    if (만 != 0) std::cout << 만 << "만 ";
    if (천 != 0) std::cout << 천 << "천 ";
    if (백 != 0) std::cout << 백 << "백 ";
    if (십 != 0) std::cout << 십 << "십 ";
    if (일 != 0) std::cout << 일;

    std::cout << std::endl;

    return 0;
}