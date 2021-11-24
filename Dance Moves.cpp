#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int x,y;
		cin>>x>>y;
		if(y<=x) cout<<x-y<<"\n";
		else
		{
			int d=y-x;
			if(d%2==0) cout<<d/2<<"\n";
			else cout<<((d+1)/2)+1<<"\n";
		}
	}
	return 0;
}
