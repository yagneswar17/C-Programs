/* Program on deque.	*/

#include <iostream> 
#include <deque> 

using namespace std; 

int main() 
{ 
	deque <int>num;
	deque <int>::iterator it;
	int n,i,ele,pos;
	cout<<"\n Enter no. of elements : ";
	cin>>n;
	cout<<"\n Enter elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>ele;
		num.push_back(ele);	
	}  
	cout << "The elements are : "<<endl; 
	 
	for(it=num.begin();it!=num.end();++it) 
		cout<<" \t"<<*it;

	cout<<"\n Size : "<<num.size()<<endl;  
	 
	cout<<"\n First element : " <<num.front(); 
	cout<<"\n Last element  : " <<num.back()<<endl;
	
	cout<<"\n Enter position : ";
	cin>>pos;
	cout<<"\n At position "<<pos<<" : " <<num.at(pos); 
	return 0; 
} 

