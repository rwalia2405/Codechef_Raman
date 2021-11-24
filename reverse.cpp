# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
	cin>>b[i];
	for(int i=0;i<a;i++)
	{
		int sum=0;
		while(b[i]>0)
		{
			int d=b[i]%10;
			sum=10*sum+d;
			b[i]=b[i]/10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
