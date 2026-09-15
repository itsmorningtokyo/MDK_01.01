#include <iostream>

int main()
{
    std::cout << "Введите число:";
    int n;
    std::cin >> n;

    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    std::cout << "Сумма цифр: " << sum << "\n";
    return 0;
}