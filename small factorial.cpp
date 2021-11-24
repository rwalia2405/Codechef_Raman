# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b[a];
	int c[a];
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
		int sum=1;
		for(int j=1;j<=b[i];j++)
		{
			sum=sum*j;
		}
		c[i]=sum;
	}
	for(int i=0;i<a;i++)
	cout<<c[i]<<endl;
	return 0;
}
