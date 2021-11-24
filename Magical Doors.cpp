# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int is=0;
		int ans=0;
		for(ll j=0;j<s.length();j++)
		{
			int num=int(s[j])-48;
			if((num+is)%2==0)
			{
				ans++;
				is=(is+1)%2;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
