# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int ind=0;
		int eng=0;
		for(int i=0;i<5;i++)
		{
			int a;
			cin>>a;
			if(a==1) ind++;
			else if(a==2) eng++;
		}
		if(ind==eng) cout<<"DRAW\n";
		else if(ind>eng) cout<<"INDIA\n";
		else cout<<"ENGLAND\n";
	}
	return 0;
}
