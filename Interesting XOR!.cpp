# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll c;
		cin>>c;
		ll d=int(log2(c))+1;
		//cout<<d<<"\n";
		ll m = pow(2,d);
		//cout<<m<<"\n";
		ll ans = 0;
		for(ll j=0;j<m;j++)
		{
			//cout<<int(c^j)<<"\n";
			ll a = int(c^j)*j;
			if(a>ans) ans=a;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
