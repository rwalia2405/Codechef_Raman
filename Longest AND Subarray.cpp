# include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		if(n==1) cout<<"1\n";
		else{
		int d = int(log2(n));
		if(pow(2,d)==n) cout<<n-(pow(2,d-1))<<"\n";
		else
		{
			cout<<max((pow(2,d)-pow(2,d-1)),(n-pow(2,d)+1))<<"\n";
		}	}
	}
	return 0;
}

