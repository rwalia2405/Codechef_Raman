# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		string a="";
		string b="";
		if(s[0]==s[1])
		{
			a+=s[0];
			b+=s[1];
		}
		else if(s[0]>s[1])
		{
			a+=s[1];
			b+=s[0];
		}
		else
		{
			a+=s[0];
			b+=s[1];
		}
		for(int j=2;j<s.length();j++)
		{
			b+=s[j];
		}
		cout<<a<<" "<<b<<"\n";
	}
	return 0;
}
