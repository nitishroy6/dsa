//Write a program in C++ to find the sum of digits of a given number.
#include <iostream>
using namespace std;

int main ()
{
    int sum = 0;
    int num;
    cout << "Enter digits to get sum: ";
    cin >> num;
    while ( num > 0)
    {
        int digit = num % 10;
        num = num / 10;
        sum = sum + digit;
    }
    cout << "\n Sum of digits :  "<< sum;
    return 0;
}