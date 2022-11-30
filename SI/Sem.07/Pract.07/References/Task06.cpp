#include <iostream>

const short BASE = 10;

int GetNumberOfDigits(unsigned n)
{
    unsigned nCopy = n;
    int counter = 0;
    while (nCopy > 0)
    {
        nCopy /= 10;
        counter++;
    }
    return counter;

}

int Pow(int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= BASE;
    }
    return result;
}

bool IsEven(int n)
{
    if (n % 2 == 0)
        return true;
    else return false;
}

void DivideNumberInTwoParts(unsigned& number, unsigned& num1, unsigned& num2)
{
    int digitsNumber = GetNumberOfDigits(number);
    if (!IsEven(digitsNumber)) 
    {
        digitsNumber++;
    }
    int i = 0;
    for (i = 0; i < digitsNumber / 2 - 1; i++)
    {
        num2 += number % 10*Pow(i);
        number /= 10;
    }
    for (i = 0; i < digitsNumber / 2; i++)
    {
        num1 += number % 10 * Pow(i);
        number /= 10;
    }

    std::cout << num1 << " " << num2;
}

int main()
{
    unsigned n = 0, firstHalf = 0, secondHalf = 0;
    std::cin >> n;
    DivideNumberInTwoParts(n, firstHalf, secondHalf);
}