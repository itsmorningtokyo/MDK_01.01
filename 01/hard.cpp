#include <iostream>

int main()
{
    std::cout << "Введите целое число: ";
    long long n;
    if (!(std::cin >> n))
        return 0;

    long long sum = n * (n + 1) * (2 * n + 1) / 6;

    std::cout << "Ваше целое число: " << sum << std::endl;

    return 0;
}