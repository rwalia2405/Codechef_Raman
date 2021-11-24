# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		int d,x,y,z;
		cin>>d>>x>>y>>z;
		int xd = 7*x;
		int yd = (d*y)+((7-d)*z);
		cout<<max(xd,yd)<<"\n";
	}
	return 0;
}
