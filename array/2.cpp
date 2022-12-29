// Write a C++ program to find the largest three elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 1, 9, 10, 3};
    int x = 0;
    int y = 0;
    int z = 0;
    int len = sizeof(arr) / sizeof(int);
    for (int i=0; i < len; i++)
    {
        if (arr[i] > x){
            x = arr[i];
        }
    }
    cout << "\nNumber is "<< x;
    for (int i=0; i < len; i++)
    {
        if (arr[i] > y && arr[i] < x){
            y = arr[i];
        }
    }
    cout << "\nNumber is "<< y;
    for (int i=0; i < len; i++)
    {
        if (arr[i] > z && arr[i] < y){
            z = arr[i];
        }
    }
    cout << "\nNumber is "<< z;
}