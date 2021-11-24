# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n,v;
		cin>>n>>v;
		ll maxi,mini;
		if(n%2==0)
		{
			maxi=((n/2)*(n-1));
		}
		else
		{
			maxi=(((n-1)/2)*n);
		}
		if(v==1)
		{
		    cout<<maxi<<" "<<maxi<<"\n";
		}
		else{
		mini=0;
		ll c=((n-1)/v);
		ll s=((c*(2+((c-1)*v)))/2);
		mini+=(s*v);
		if((n-1)%v!=0)
		{
			ll l=1+((c-1)*v);
			l+=v;
			mini+=((n-l)*v);
		}
		cout<<maxi<<" "<<mini<<"\n";}
	}
	return 0;
}
