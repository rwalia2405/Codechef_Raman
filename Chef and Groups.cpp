# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string a;
		cin>>a;
		long long int c=0;
		bool f=true;
		for(long long int j=0;j<a.length();j++)
		{
			if(a[j]=='1'&&f)
			{
				c++;
				f=false;
			}
			else if(a[j]=='1'&&!f) continue;
			else f=true;
		} 
		cout<<c<<"\n";
	}
	return 0;
}
