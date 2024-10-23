#include<iostream>
#include<string>
using namespace std;
bool hasDuplicates(const string&str)
{
	for(int i=0;i<str.length();i++)
	{
		for(int j=i+1;j<str.length();j++)
		{
			if(str[i]==str[j])
			{
				cout<<"the duplicate character is:"<<str[i]<<endl;
			
				break;
			}
		}
	}


}
int main()
{
	string input;
	cout<<"enter the string:";
	cin>>input;
	cout<<hasDuplicates(input);
}
