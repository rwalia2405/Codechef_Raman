# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int j=1;
		long long int c=0;
		long long int d=0;
		long long int a=n;
		while(n/pow(5,j))
		{
			d=d+n/pow(5,j);
		//	n=n/pow(5,j);
			j++;
		}
		j=1;		
		while(a/pow(2,j)&&c<=d)
		{
			c=c+a/pow(2,j);
			//a=a/pow(2,j);
			j++;
		}
		if(c>0&&d>0){
		cout<<min(c,d)<<endl;}
		else{cout<<"0"<<endl;
		}
	}
	return 0;
	
}
