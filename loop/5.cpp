// Write a program in C++ to check whether a number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to check , prime or not: ";
    cin >> number;
int i = 2; 
    while (i <= number/2)
    {

        if (number % i == 0)
        {
            cout << "Number " << number << " is not prime." << endl;
            return 0;
        }else{
            i++;
        }
    }
      cout << "Number " << number << " is prime." << endl;

    return 0;
}