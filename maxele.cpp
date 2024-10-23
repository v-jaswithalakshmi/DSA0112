#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements in the array:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements in the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxElement=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>maxElement)
		{
			maxElement=arr[i];
		}
	}
	cout<<"maxelement is:"<<maxElement<<endl;
	
}
