// 36. Write a program in C++ to display the pattern like right angle triangle with number.
// 1
// 12
// 123
// 1234
// 12345
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
            cout << j;
        }
        cout << endl;
    }
}
