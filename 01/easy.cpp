#include <iostream>

int main()
{
    std::cout << "Введите букву на латыни и число:";
    char c;
    int n;

    std::cin >> c >> n;

    std::cout << "Ваша буква:" << char(c + n);
    return 0;
}