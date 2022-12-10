// Write a program in C++ to find the factorial of a number.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to find factorial: ";
    cin >> num;
   int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
    return 0;
}