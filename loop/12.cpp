// Write a program in C++ to calculate the sum of the series 
//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include <iostream>

using namespace std;
int main(){
    int sum = 0;
    int n;
    cout << "Enter nth value";
    cin >> n;
    for (int i =1; i <= n; i++)
    {
        sum = sum + (i*i);
    }
    cout << sum;
    return 0;
}