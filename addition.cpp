# include <iostream>
using namespace std;
int main()
{
	long int a;
	cin>>a;
	if(a>=1&&a<=1000)
	{
		long long int c[a];
		long long int b[a][2];
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<2;j++)
			cin>>b[i][j];
		/*	if(b[i][0]>=1&&b[i][0]<=10000&&b[i][1]>=1&&b[i][1]<=10000) */c[i]=b[i][0]+b[i][1];
		}
		cout<<endl;
		for(int i=0;i<a;i++)
		{
			cout<<c[i];
			cout<<endl;
		}
		
	}
	return 0;
}
