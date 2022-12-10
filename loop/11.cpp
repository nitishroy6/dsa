// Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^
#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    double sum = 0;
    cout << "Enter nth number :  ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum =  sum + 1/pow(i,i);
    }
cout << "sum is equal to : "<<sum;
    return 0;
}