# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int a,b;
		cin>>a>>b;
		long long int ans=(a/2)*(b/2)+(a-(a/2))*(b-(b/2));
		cout<<ans<<"\n";
	}
	return 0;
}
