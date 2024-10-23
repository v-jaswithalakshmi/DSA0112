#include<iostream>
using namespace std;
class floydtriangle
{
	public:
		int i,j,n,count=1;
	
		floydtriangle()
		{
				cout<<"enter the rows:";
		cin>>n;
			for(i=0;i<n;i++)
			{
				for(j=0;j<=i;j++)
				{
					cout<<count<<" ";
					count++;
				}
				cout<<endl;
			
			}
			
		}
		~floydtriangle() {
            cout << "destroy"<<endl;
        }
		
};
int main()
{
	floydtriangle ft;
	return 0;
}
