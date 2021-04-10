/* Program on vectors.	*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> num;
	int n,i,ele;
	cout<<"\n How many elements do you want to add in a vector? :";
	cin>>n;
	cout<<"\n Enter elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>ele;
		num.push_back(ele);
	}
	cout<<"\n The elements are : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<" \t"<<num[i];
	}
	return 0;
}
