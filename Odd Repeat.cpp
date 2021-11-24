# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll n,k,s;
		cin>>n>>k>>s;
		ll r = s-(n*n);
		cout<<r/(k-1)<<"\n";
	}
	return 0;
}
