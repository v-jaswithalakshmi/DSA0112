#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long num;
	cout<<"enter the number";
	cin>>num;
	int freq[10]={0};
	num=abs(num);
	while(num>0)
	{
		freq[num%10]++;
		num=num/10;
	}
	for(int i=0;i<10;i++)
	{
		if(freq[i]>0)
		{
			cout<<"digit"<<i<<":"<<freq[i]<<endl;
		}
	}
}
