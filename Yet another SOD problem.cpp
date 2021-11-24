# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll l,r;
		cin>>l>>r;
		ll reml=l%3;
		if(reml!=0) l=l+3-reml;
		ll remr=r%3;
		r=r-remr;
		//cout<<l<<"\n"<<r<<"\n";
		if(l>r) cout<<"0\n";
		else cout<<(((r-l)/3)+1)<<"\n";
	}
	return 0;
}
