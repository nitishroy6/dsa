// Write a program in C++ to calculate the series
// (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int total_sum = 0;
    int n;
    cout << "Enter nth value";
    cin >> n;
    for (int i =1; i <= n; i++)
    {
        sum = sum + i;
        total_sum = total_sum + sum;
    }
    cout << total_sum;
    return 0;
}