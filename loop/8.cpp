// Write a program in C++ to find the last prime number occur before the entered number.
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
   int num1,num2;
    int fnd=0,ctr=0;
	cout << " Enter Number: ";
	cin>> num1;	
    int result;

	cout << "\n The last prime numbers occur before "<<num1<<" is:";
    for(int i=1;i<=num1;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               {
                 fnd++; 
                 result = i;
               }
               ctr=0;
       }
       cout << result;
 return 1;
}