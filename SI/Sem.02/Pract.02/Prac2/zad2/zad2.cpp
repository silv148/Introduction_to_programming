// zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char letter;
    std::cin >> letter;
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
    {
        switch (letter)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o':
        case 'A':
        case 'E':
        case 'I':
        case 'U':
        case 'O':
            std::cout << "гласна";
            break;

        default:
            std::cout << "съгласна";
            break;
        }
    }
    else {
        std::cout << "некоректен вход";
    }

}