# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(int j=0;j<n;j++) cin>>a[j];
		unordered_map<ll,ll> m;
		for(int j=0;j<n;j++)
		{
			m[a[j]]++;
		}
		ll max_val=a[0];
		ll max_num=0;
		for(auto j:m)
		{
			if(j.second>max_num)
			{
				max_num=j.second;
				max_val=j.first;
			}
		}
		if(max_num==1)
		{
			bool b=true;
			for(ll j=0;j<n;j++)
			{
				if(m.find(a[j]^x)!=m.end())
				{
					cout<<"2 1\n";
					b=false;
					break;
				}
			}
			if(b)
			{
				cout<<"1 0\n";
			}
		}
		else
		{
			if(m.find(max_val^x)!=m.end())
			{
				cout<<max_num+m.at(max_val^x)<<" "<<m.at(max_val^x)<<"\n";
			}
			else
			{
				cout<<max_num<<" 0\n";
			}
		}
	}
	return 0;
}
