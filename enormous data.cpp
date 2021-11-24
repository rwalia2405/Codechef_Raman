# include <iostream>
using namespace std;
long int count=0;
int main()
{
	long int a,b;
	cin>>a>>b;
	long int c[a];
	for(int i=0;i<a;i++)
	cin>>c[i];
	cout<<endl;
	for(int i=0;i<a;i++)
	{
		if(c[i]%b==0) count++;
	}
	cout<<count;
	return 0;
}
