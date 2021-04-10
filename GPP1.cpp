/* C++ Program for exception handling using multiple catch statements.*/

#include<iostream>

using namespace std;

void temp(int n)
{
	try
	{
		if(n==0)
			throw n;
		else if(n<0)
			throw 'N';
		else if(n>0)
			throw 'P';
	}
	catch(int a)
	{
		cout<<"\n It's "<<a<<endl;
	}
	catch(char a)
	{
		if(a=='N')
			cout<<"\n Negative Integer = "<<n<<endl;
		else
			cout<<"\n Positive Integer = "<<n<<endl;
	}
}

int main()
{
	int num;
	char ch;
	cout<<"\n Exception handling using multiple catch statements."<<endl;
   lb:
	cout<<"\n Enter Any Integer : ";
	cin>>num;
	temp(num);
	cout<<"\n Do you want to Enter more (Y/N)";
	cin>>ch;
	if(ch=='Y'||ch=='y')
		goto lb;
	return 0;
}
