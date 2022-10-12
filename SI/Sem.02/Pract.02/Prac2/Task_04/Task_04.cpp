// Task_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int percentage = 0;
    std::cout << "Result: ";
    std::cin >> percentage;
    if (percentage >= 90) {
        std::cout << "Grade: 6++";
    }
    else if (percentage >= 80) {
        std::cout << "Grade: 6";
    }
    else if (percentage >= 70) {
        std::cout << "Grade: 5";
    }
    else if (percentage >= 60) {
        std::cout << "Grade: 4";
    }
    else if (percentage >= 40) {
        std::cout << "Grade: 3";
    }
    else {
        std::cout << "Grade: 2";
    }
}