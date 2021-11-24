# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long sum=0;
		while(n>0)
		{
			int d=n%10;
			sum=10*sum+d;
			n/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
