# include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,x;
	cin>>n>>h>>x;
	int m;
	cin>>m;
	for(int i=0;i<n-1;i++)
	{
		int p;
		cin>>p;
		if(p>m) m=p;
	}
	if((x+m)>=h) cout<<"YES"<<"\n";
	else cout<<"NO\n";
	return 0;
}
