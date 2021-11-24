# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void prime(bool *v,ll n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(v[i]==true)
		{
			for(int j=i*i;j<=n;j+=i) v[j]=false;
		}
	}
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ll t;
	cin>>t;
	long long int n=10000000;
	bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
	//prime(v,10000000);
	for(ll i=0;i<t;i++)
	{
		ll x,y;
		cin>>x>>y;
		ll ans=0;
		while(x!=y)
		{
			if(y==(x+1)) x++;
			else if(prime[x+2]) x+=2;
			else x++;
			ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
