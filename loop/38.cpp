// 38. Write a program in C++ to make such a pattern like right angle triangle with number increased by 1
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int n;
    int x = 1;
    cout << "Enter Number ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << x<< " ";
            x++;
        }
        cout << endl;
    }
}
