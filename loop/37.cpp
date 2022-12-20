// 37. Write a program in C++ to make such a pattern like right angle triangle using number which will repeat the number for that row.
// 1       
// 22 
// 333     
// 4444      
// 55555 
#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
