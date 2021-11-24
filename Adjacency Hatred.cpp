# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int j=0;j<n;j++) cin>>a[j];
		int even=-1;
		int odd=-1;
		for(int j=0;j<n;j++)
		{
			if(a[j]%2==0)
			{
				even=j;
				break;
			}
		}
		for(int j=0;j<n;j++)
		{
			if(a[j]%2!=0)
			{
				odd=j;
				break;
			}
		}
		if(even==-1||odd==-1) cout<<"-1\n";
		else
		{
			if((a[0]%2==0&&a[n-1]%2!=0)||(a[0]%2!=0&&a[n-1]%2==0))
			{
				for(int j=0;j<n;j++) cout<<a[j]<<" ";
			    cout<<"\n";
			}
			else
			{
				if(even==0)
				{
					ll o=a[odd];
					a[odd]=a[n-1];
					a[n-1]=o;
				}
				else
				{
					ll o=a[even];
					a[even]=a[n-1];
					a[n-1]=o;
				}
				for(int j=0;j<n;j++) cout<<a[j]<<" ";
			    cout<<"\n";
			}
		}
	}
	return 0;
}
