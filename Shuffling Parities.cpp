# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll j=0;j<n;j++) cin>>a[j];
		ll even_pos=n/2;
		ll odd_pos=n-even_pos;
		ll even=0;
		ll odd=0;
		for(ll j=0;j<n;j++)
		{
			if(a[j]%2==0) even++;
			else odd++;
		}
		ll ans=min(even_pos,odd)+min(odd_pos,even);
		cout<<ans<<"\n";
	}
	return 0;
}
