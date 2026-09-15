#include <iostream>

int main()
{
    std::cout << "Введите стороны треугольника: ";
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        std::cout << "UNDEFINED\n";
        return 0;
    }

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
    return 0;
}