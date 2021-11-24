# include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	long int t;
	cin>>t;
	for(long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		if(n==2)
		{
			cout<<"0"<<endl;
		}
		else if(n%2!=0)
		{
			cout<<n/2<<endl;
		}
		else
		{
			int digits=int(log2(n))+1;
			int d=0;
			int c=0;
			int q=n;
			while(q%2==0)
			{
				d++;
				q=q/2;
			}
			d++;
			int p=(1<<d);
			cout<<n/p<<endl;
		}
	}
	return 0;
}
