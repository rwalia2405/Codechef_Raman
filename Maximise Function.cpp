# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(long long int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		long long int maxi,mini;
		maxi=a[0];
		mini=a[0];
		for(long long int j=0;j<n;j++)
		{
			if(a[j]>maxi) maxi=a[j];
			if(a[j]<mini) mini=a[j];
		}
		cout<<2*(maxi-mini)<<"\n";
	}
	return 0;
}
