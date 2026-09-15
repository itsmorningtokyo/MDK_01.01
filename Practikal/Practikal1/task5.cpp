#include <iostream>

int main()
{
    std::cout << "Введите координаты (x1 y1 x2 y2):  ";
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
        std::cout << "YES \n";
    else
        std::cout << "NO \n";
    return 0;
}