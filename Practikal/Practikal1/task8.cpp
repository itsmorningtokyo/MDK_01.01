#include <iostream>

int main()
{
    std::cout << "Введите месяц и год: ";
    int month, year;
    std::cin >> month >> year;

    int days;

    if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    std::cout << "Дней: " << days << "\n";
    return 0;
}