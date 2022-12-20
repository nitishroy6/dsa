// Write a program in C++ to display 
//the multiplication table vertically from 1 to n.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number ";
    cin >> n;
    for (int i = 1; i <= 10; i++) 
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