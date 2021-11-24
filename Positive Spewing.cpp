# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		ll sum=0;
		for(ll j=0;j<n;j++) 
		{
			cin>>a[j];
			sum+=a[j];
		}
		while(k)
		{
			vector<ll> b;
			for(ll j=0;j<n;j++)
			{
				if(a[j]>0)
				{
					sum+=2;
					if(a[(j-1+n)%n]==0) b.push_back((j-1+n)%n);
					if(a[(j+1)%n]==0) b.push_back((j+1)%n);
				}
			}
			k--;
			if(b.size()==0) break;
			for(ll j=0;j<b.size();j++)
			{
				a[b[j]]++;
			}
			b.clear();
		}
		if(sum==0) cout<<sum<<"\n";
		else {
		sum+=2*k*n;
		cout<<sum<<"\n";}
	}
	return 0;
}
