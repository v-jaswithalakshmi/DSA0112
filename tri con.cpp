#include<iostream>
using namespace std;
class triangle
{
	public:
		int i,j,n;
	
		triangle()
		{
				cout<<"enter the rows:";
		cin>>n;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<i<<" ";
				}
				cout<<endl;
			}
			
		}
};
int main()
{
	triangle t;
	return 0;
}
