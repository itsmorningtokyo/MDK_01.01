#include <iostream>
#include <iomanip>

int main()
{
    double r;
    std::cin >> r;

    const double PI = 3.141592653589793;

    double lenght = 2 * PI * r;
    double area = PI * r * r;
    double volume = 4.0 / 3.0 * PI * r * r * r;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << lenght << " " << area << " " << volume;

    return 0;
}