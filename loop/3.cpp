// Write a program in C++ to display n terms of natural number and their sum.
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of the terms is: " << sum << endl;
    return 0;


}