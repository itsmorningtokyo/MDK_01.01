#include <iostream>

int main()
{
    std::cout << "Введите длину в сантиметрах: ";
    double sm;
    std::cin >> sm;
    std::cout << "Дюймы: " << sm / 2.54 << '\n';
    return 0;
}