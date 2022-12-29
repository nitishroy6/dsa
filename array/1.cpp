// Write a C++ program to find the largest element of a given array of integers.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 1, 9, 10, 3};
    int x = 0;
    int len = sizeof(arr) / sizeof(int);
    for (int i=0; i < len; i++)
    {
        if (arr[i] > x){
            x = arr[i];
        }
    }
    cout << "Number is "<< x;
}