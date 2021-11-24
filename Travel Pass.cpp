# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		int o=0;
		int z=0;
		for(int j=0;j<n;j++)
		{
			if(s[j]=='0') z++;
			else o++;
		}
		cout<<(a*z)+(o*b)<<"\n";
	}
	return 0;
}
