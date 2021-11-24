# include <iostream>
using namespace std;
int main()
{
	long int a;
	cin>>a;
	long long int b[a];
	//int c[a];
	for(int i=0;i<a;i++)
	cin>>b[i];
	for(int i=0;i<a;i++)
	{
		int count=0;
		//long long int e=b[i];
		while(b[i]>0)
		{
			int d=b[i]%10;
			if(d==4) count++;
			b[i]=b[i]/10;
		}
		cout<<count<<endl;
	}
	return 0;
}	

