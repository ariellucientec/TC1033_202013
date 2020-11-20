#include<iostream>
using namespace std;

void helperFunction(int number, int* numberOfDigits, int* multiplyBy)
{
    int individual = 0;
    for(*multiplyBy = 1, numberOfDigits = 0; number != 0; *multiplyBy*=10, numberOfDigits++)
    {
        individual = number%10;
        number = (number - individual) / 10;
    }
    *multiplyBy /= 10;
}

int rotateNumber(int number)
{
    int lastDigit = number % 10;
    int internalNumber = (number - lastDigit)/10;
    int temp = 0;
    int multiplyBy;
    helperFunction(number, &temp, &multiplyBy);
    int result = lastDigit * multiplyBy + internalNumber;
    return result;
}

bool isPrime(int number)
{
    for(int i = number/2; i>1; i--)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool circularPrime(int number)
{
    int numberOfDigits;
    int multiplyBy;
    helperFunction(number, &numberOfDigits, &multiplyBy);
    for(int i=0; i<numberOfDigits; i++)
    {
        if (isPrime(number))
        {
            number = rotateNumber(number);
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << circularPrime(281);
}