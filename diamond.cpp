#include<iostream>
using namespace std;
int main()
{
	int i,j,r;
	cout<<"enter the number of rows";
	cin>>r;
	cout<<" "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(j+i==r/2||i+j==r-1+(r/2)||j==i+(r/2)||i==j+(r/2))
			cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	
}
