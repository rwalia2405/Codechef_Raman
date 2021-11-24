# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll m,n,k;
		cin>>m>>n>>k;
		if((n*k)<m) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
