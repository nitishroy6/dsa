 //sum_of_first_10_natural_numbers.cpp
 #include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    } 
    cout << sum << endl;
    return 0;
}