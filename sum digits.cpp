# include <iostream>
using namespace std;
int main()
{
	long int a;
	cin>>a;
	long int b[a];
	for(int i=0;i<a;i++)
	cin>>b[i];
	cout<<endl;
	for(int i=0;i<a;i++)
	{
		int sum=0;
		while(b[i]>0)
		{
			int c=b[i]%10;
			b[i]=b[i]/10;
			sum+=c;
		}
		cout<<sum<<endl;
	}
	return 0;
}
