# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long int m=0;
	for(long long int i=0;i<n;i++)
	{
		m=max(m,a[i]*(n-i));
	}
	cout<<m<<endl;
	return 0;
}
