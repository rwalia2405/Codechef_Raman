# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll x;
		cin>>x;
		ll ans=1;
		ll o=0;
		while(o<x)
		{
			o=o|ans;
			if(o<=x)
			ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
