# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b[a][2];
	int c[a];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<2;j++)
		cin>>b[i][j];
		c[i]=b[i][0]%b[i][1];
	}
	cout<<endl;
	for(int i=0;i<a;i++)
	cout<<c[i]<<endl;
	return 0;	
	
}
