# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	long int b[a];
	//int c[a];
	for(int i=0;i<a;i++)
	cin>>b[i];
	for(int i=0;i<a;i++)
	{
		int sum=0;
		long int e=b[i];
		while(b[i]>0)
		{
			int d=b[i]%10;
			if(b[i]==e||b[i]<10) sum+=d;
			b[i]=b[i]/10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
