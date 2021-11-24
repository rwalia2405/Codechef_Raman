# include <iostream>
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
		int b=1;
		if(n==1)
		{
			cout<<b<<endl;
		}
		else{
		//	int q=a[0];
		//	b=0;
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				b++;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
		cout<<b<<endl;}
	}
	return 0;
}
