# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans=0;
		int b=true;
		for(int j=0;j<n-1;j++)
		{
			if(s[j]==s[j+1])
			{
				b=false;
				cout<<"YES\n";
				break;
			}
		}
		if(b) cout<<"NO\n";
	}
	return 0;
}
