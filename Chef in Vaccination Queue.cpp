# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,p,x,y;
		cin>>n>>p>>x>>y;
		int a[n];
		int e=0;
		int c=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			if(j<(p-1))
			{
				if(a[j]==0) c++;
				else e++;
			}
		}
		e++;
		cout<<((c*x)+(e*y))<<"\n";
	}
	return 0;
}
