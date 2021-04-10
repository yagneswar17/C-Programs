/* Recursive Template function for the factorial program.	*/

#include<iostream>

using namespace std;

template<class n>

int fact(n num)
{
	return num<=1?1:(num*fact(num-1));
}
int main()
{
	int num;
	cout<<"\n Enter Number : ";
	cin>>num;
	cout<<"\n Factorial = "<<fact(num);
	return 0;
}
