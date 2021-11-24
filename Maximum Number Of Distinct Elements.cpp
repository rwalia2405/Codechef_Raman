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
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		vector<int> ans;
		unordered_map<int,int> mp;
		for(int j=0;j<n;j++)
		{
			if(mp.find(a[j])==mp.end())
			{
				ans.push_back(a[j]-1);
				mp[a[j]]++;
			}
			else
			{
				if(a[j]-mp.at(a[j])<=1) ans.push_back(a[j]);
				else
				{
					ans.push_back(a[j]-(mp.at(a[j])+1));
					mp[a[j]]++;
				}
			}
		}
		for(int j=0;j<n;j++)
		{
			cout<<ans[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
