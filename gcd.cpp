#include<iostream>
using namespace std;
int mian()
{
	int num1,num2,temp;
	cout<<"enter the integers";
	cin>>num1>>num2;
	while(num2!=0)
	{
		temp=num2;
		num2=num1%num2;
		num1=temp;
	}
	cout<<"GCD"<<num1<<endl;
}
