// Write a program in C++ to find the perfect numbers between 1 and 30
#include <iostream>
using   namespace std;

int main()
{
    int ss = 6/1;
    cout << ss << endl;
    int sum = 0;
    int s = 0;
    int a = 6;
    int b = a/2;
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            cout << "print j "<< j << endl;
            if (i % j == 0)
            {
                // s = i/j;
                sum = sum + j;
                cout << sum << endl;
                if (sum == i)
                {
                    cout << "perfect number is " << i << endl;
                }


            }

        }
    }
    cout << sum << endl;
    return 0;
}