#include <iostream>

int main()
{
    std::cout << "Введите первые n числа";
    long long n;
    std::cin >> n;
    std::cout << "Сумма:" << n * (n + 1) / 2 << "\n";
    return 0;
}