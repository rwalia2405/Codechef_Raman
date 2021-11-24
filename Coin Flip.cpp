# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long int g;
		cin>>g;
		for(long int j=0;j<g;j++)
		{
			int I,q;
			long long int n;
			cin>>I>>n>>q;
			if(n%2==0)
			{
				cout<<n/2<<endl;
			}
			else
			{
				if(I==q)
				{
					cout<<n/2<<endl;
				}
				else
				{
					cout<<(n/2)+1<<endl;
				}
			}
		}
	}
	return 0;
}
