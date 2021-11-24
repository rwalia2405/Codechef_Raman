# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]>k)
			{
				c+=(a[j]-k);
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
