// zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    int result = a > b ? a : b;
    std::cout << "Bigger number is: " << result;
}
