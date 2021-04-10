/* C++ program for Bubble Sort using Template Functions.	*/

#include<iostream>

using namespace std;

template <class BS>

void BubbleSort(BS arr[],int len)
{
	int i,j;
	BS temp;
	for(i=0;i<len-1;i++)
	{
		for(j=len-1;j>i;j--)
		{
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
}

int main()
{
	int A[100],size,i;
	cout<<"\n Enter no. of elements : ";
	cin>>size;
	cout<<"\n Enter Array elements : ";
	for(i=0;i<size;i++)
		cin>>A[i];
	BubbleSort(A,size);
	cout<<"\n The Sorted Array elements are : "<<endl;
	for(i=0;i<size;i++)
		cout<<" \t"<<A[i];
	return 0;
}
