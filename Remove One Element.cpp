# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    	ll n;
    	cin>>n;
    	ll a[n];
    	for(int j=0;j<n;j++) cin>>a[j];
    	ll b[n-1];
    	for(int j=0;j<n-1;j++) cin>>b[j];
    	ll suma=0;
    	ll sumb=0;
    	for(int j=0;j<n-1;j++)
    	{
    		suma+=a[j];
    		sumb+=b[j];
		}
		suma+=a[n-1];
		ll diff = sumb-suma;
		ll ans=0;
		sort(a,a+n);
		vector<ll> c;
		for(int j=0;j<n;j++)
		{
			if((diff+a[j])%(n-1)==0)
			{
				ans = (diff+a[j])/(n-1);
				if(ans>0) c.push_back(ans);
			}
		}
		sort(c.begin(),c.end());
		cout<<c[0]<<"\n";
	}
	return 0;
}
