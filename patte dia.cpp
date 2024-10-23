#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the number of rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
		
		cout<<" ";
		cout<<" * ";
	}
	
	if(i>1)
	{
		for(j=1;j<=2*(i-1)-1;j++)
		{
		
		
			cout<<"";
			cout<<" * ";
		}
		cout<<endl;
	} }
	
	for( i=n-1;i>=1;i--)
		{
		for(j=1;j<=n-i;j++)
		{
		
		cout<<" ";
		cout<<" * ";
	}
	
	if(i>1)
	{
		for(j=1;j<=2*(i-1)-1;j++)
		{
			cout<<" ";
			cout<<" * ";
		}
		cout<<endl;
	}
} }

