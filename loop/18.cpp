// Write a program in C++ to display
//the cube of the number upto given an integer.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i * i * i << endl;
    }
    return 0;
}