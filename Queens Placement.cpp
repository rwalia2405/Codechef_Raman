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
		char a[n][n];
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++) a[j][k]='.';
		}
		int p=n;
		a[n-2][1]='Q';
		while(p>3)
		{
			a[p-4][n-p+3]='Q';
			p--;
		}
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++) cout<<a[j][k]<<" ";
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}

