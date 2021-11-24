# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll p,a,b,c,x,y;
		cin>>p>>a>>b>>c>>x>>y;
		ll anar=(b+(a*x));
		ll chakri = (c+(a*y));
		cout<<max((p/anar),(p/chakri))<<"\n";
	}
	return 0;
}
