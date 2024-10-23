#include<iostream>
using namespace std;
int main()
{
	int count=0,n;
	cout<<"enter the numbers";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cout<<"the total numbers is:"<<count<<endl;
}
