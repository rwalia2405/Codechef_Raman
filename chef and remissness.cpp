# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	long int b[a][2];
	long int c[a][2];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<2;j++)
		cin>>b[i][j];
		if(b[i][0]>b[i][1])
		c[i][0]=b[i][0];
		else c[i][0]=b[i][1];
		c[i][1]=b[i][1]+b[i][0];
	}
	for(int i=0;i<a;i++)
	cout<<c[i][0]<<" "<<c[i][1]<<endl;
	return 0;
}
