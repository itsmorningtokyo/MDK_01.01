#include <iostream>

int main()
{
    std::cout << "Введите год: ";
    int year;
    std::cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}