# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll hcf(ll a,ll b)
{
	if(a==0) return b;
	else return hcf(b%a,a);
}
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
		sort(a,a+n);
		ll hcff = hcf(a[0],a[1]);
		for(ll j=2;j<n;j++)
		{
			hcff = hcf(hcff,a[j]);
		}
		if(hcff==a[n-1])
		{
			cout<<n<<"\n";
		}
		else
		{
			a[n-1]=hcff;
			ll sum=0;
			for(ll j=0;j<n;j++)
			{
				sum+=(a[j]/hcff);
			}
			cout<<sum<<"\n";
		}
	}
	return 0;
}
