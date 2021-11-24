# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	ll n,m,x,y;
    	cin>>n>>m>>x>>y;
    	if(m>n)
    	{
    		ll z=m;
    		m=n;
    		n=z;
		}
		ll d=((m+n-2)*x);
		ll nd=((m-1)*y)+((n-m)*x);
		cout<<min(d,nd)<<"\n";
	}
	return 0;
}
