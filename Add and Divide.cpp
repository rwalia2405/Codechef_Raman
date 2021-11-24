# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
vector<ll> factor(ll n)
{
	vector<ll> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        v.push_back(n);
    
    return v;
}
ll gcd(ll a,ll b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
ll fgcd(ll a,ll b)
{
	if(b>a)
		{
			ll c=b;
			b=a;
			a=c;
		}
		return gcd(a,b);
}
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll a,b;
		cin>>a>>b;
		bool f=true;
		ll g=fgcd(a,b);
		ll am=a/g;
		vector<ll> v=factor(am);
		bool ans=true;
		for(ll j=0;j<v.size();j++)
		{
			if((b%v[j])!=0)
			{
				ans=false;
				break;
			}
		}
		if(ans) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
