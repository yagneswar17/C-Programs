/* C++ Program on Abstract Class and Pure Virtual Function.	*/
#include<abstract>
#include<constream.h>

using namespace std;

class A : public debug
{
	int a;
	public:
		A(int j=0)
		{
			a=j;
		}
		void show()
		{
			cout<<"\n In class A a = "<<a;
		}
};

class B : public debug
{
	int b;
	public:
		B(int k)
		{
			b=k;
		}
};

int main()
{
	A a(1);
	B b(5);
	a.show();
	b.show();
	return 0;
}

