#include <iostream>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll x,k;
		cin>>x>>k;
		cout<<2*x<<" "<<((x*k)*((x*k)-1))<<"\n";
	}
	return 0;
}
