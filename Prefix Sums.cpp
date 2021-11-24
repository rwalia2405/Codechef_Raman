# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		ll sum=((n/2)*(n+1));
		if(sum%2!=0) cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			vector<int>a,b;
			ll j=1;
			ll k=n;
			while(j<k)
			{
				a.push_back(j);
				a.push_back(k);
				j++;
				k--;
				b.push_back(j);
				b.push_back(k);
				j++;k--;
			}
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			for(ll j=0;j<n/2;j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<"\n";
			for(ll j=0;j<n/2;j++)
			{
				cout<<b[j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
