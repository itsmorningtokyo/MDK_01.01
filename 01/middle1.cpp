#include <iostream>
#include <iomanip>

int main()
{
    int seconds;
    std::cout << "Введите секунды";
    std::cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int sec = seconds % 60;

    std::cout << "Время:" << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setw(2) << minutes << ":"
              << std::setw(2) << sec;

    return 0;
}