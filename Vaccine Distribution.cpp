# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n,d;
		cin>>n>>d;
		int a[n];
		for(long long int j=0;j<n;j++) cin>>a[j];
		long long int risk=0;
		for(long long int j=0;j<n;j++)
		{
			if(a[j]>=80||a[j]<=9) risk++;
		}
		long long int ans=0;
		ans+=(risk/d);
		if(risk%d!=0) ans++;
		ans+=((n-risk)/d);
		if((n-risk)%d!=0) ans++;
		cout<<ans<<"\n";
	}
	return 0;
}
