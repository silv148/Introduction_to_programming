// zad1

#include <iostream>

int main()
{
    int year = 0;
    std::cin >> year;
    if (year % 4 == 0) {
        std::cout << "Is leap year";
    }
    else {
        std::cout << "Is NOT leap year";
    }
}
