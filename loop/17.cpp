// Write a program in C++ to print a square pattern with # character
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}