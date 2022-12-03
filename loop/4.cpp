// Write a program in C++ to find the perfect numbers between 1 and 30
#include <iostream>
using namespace std;

int main()
{   
    for (int i = 1; i <=500; i++)
    {
        int sum = 0;
        for (int j = 1; j <=i/2; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
                {
                    cout << "perfect number is " << i << endl;
                }
    }
    return 0;
}