# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int c[a][2];
	int b[a][2]={0};
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<2;j++)
		cin>>b[i][j];
		if(i>0){
		b[i][0]+=b[i-1][0];
		b[i][1]+=b[i-1][1];}
		if(b[i][0]>b[i][1]) 
		{
			c[i][0]=1;
			c[i][1]=b[i][0]-b[i][1];
		}
		else if(b[i][0]<b[i][1])
		{
			c[i][0]=2;
			c[i][1]=b[i][1]-b[i][0];			
		}
		else continue;
	}
	int d=c[0][0],max=c[0][1];
	for(int i=1;i<a;i++)
	{
		if(c[i][1]>max) 
		{
			max=c[i][1];
			d=c[i][0];
		}
	}
	cout<<endl;
	cout<<d<<" "<<max;
	return 0;
}
