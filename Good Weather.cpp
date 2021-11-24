# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int zero=0;
		int one=0;
		for(int i=0;i<7;i++)
		{
			int j;
			cin>>j;
			if(j==0) zero++;
			else one++;
		}
		if(one>zero) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
