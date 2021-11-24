# include <iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a;
	cin>>a;
	int b[a][3];
	int c[a];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<3;j++)
		cin>>b[i][j];
		for(int k=3;k>0;k--)
		{
			for(int p=0;p<k-1;p++)
			if(b[i][p]>b[i][p+1]) swap(b[i][p],b[i][p+1]);
		}
		c[i]=b[i][1];
	}
	for(int i=0;i<a;i++)
	cout<<c[i]<<endl;
	return 0;
}
void swap(int& a,int& b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
