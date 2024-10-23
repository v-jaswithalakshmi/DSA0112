#include<iostream>
#include<string>

using namespace std;
int main()
{
	string hexnumber;
	cout<<"enter the hexnumber";
	cin>>hexnumber;
	long long decimalnumber=stoi(hexnumber,NULL,16);
	cout<<decimalnumber;
	
}
