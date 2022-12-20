//Write a program in C++ to display
//the n terms of odd natural number and their sum.
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter number ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (j <= n - 1)
                cout << j << "x" << i << "=  " << i * j<<"   ";
            else
                cout << j << "x" << i << "=  " << i * j;
        }
        cout << endl;
    }
    return 0;
}