# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int j=0;j<n;j++) cin>>a[j];
		int sum=0;
		vector<int> b;
		for(int j=0;j<n;j++)
		{
			if(a[j]>=0) sum+=a[j];
			else b.push_back(-1*a[j]);
		}
		sort(b.begin(),b.end(),greater<int>());
		int s = b.size();
		int m = min(k,s);
		for(int j=0;j<m;j++) sum+=b[j];
		cout<<sum<<"\n";
	}
	return 0;
}
