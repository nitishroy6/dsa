//  Write a program in C++ to find prime number within a range
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
   int num1,num2;
    int fnd=0,ctr=0;
	cout << " Enter starting range: ";
	cin>> num1;
	cout << " Enter ending range: ";
	cin>> num2;		

	cout << "\n The prime numbers between "<<num1<<" and "<<num2<<" are:"<<endl;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                 cout<<i<<" ";
                 
               }
               ctr=0;
       }
 cout<<"\n\n The total number of prime numbers between "<<num1<<" to "<<num2<<" is: "<<fnd<<endl;
 return 1;
}