// Implement a function that takes a vector of integers as input and reverses the order of its elements. Test the function with a sample vector and
// display the reversed vector.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  vector <int> elements , reversed;
  int n = 0;
  cout << "Enter 5 integers , i will display reverse\n";
  for (int i = 0; i < 5; i++) {
    cout << "\nEnter " << i+1 << " element ";
   cin >> n;
   elements.push_back(n);
  }
  for (int i = (elements.size()-1); i >= 0; i--) {
  	cout << elements[i] << "\n";
  }
    return 0;
}