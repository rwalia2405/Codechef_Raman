# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int m = min(min(a,b),c);
		if(m==a)
		{
			cout<<"Draw\n";
		}
		else if (m==b)
		{
			cout<<"Bob\n";
		}
		else cout<<"Alice\n";
	}
	return 0;
}
