# include <bits/stdc++.h>
using namespace std;
void swapi(int &a,int &b)
{
	int c=a;
	a=b;
	b=c;
}
int main()
{
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	if(d1<d2)
	{
		swapi(d1,d2);
		swapi(v1,v2);
	}
	int days=d2-1;
	int sum=0;
	while(sum<p)
	{
		while(d1!=d2&&sum<p)
		{
			sum+=v2;
			d2++;
			days++;
		}
		if(sum>=p) break;
		sum+=(v1+v2);
		days++;
	}
	cout<<days<<"\n";
	return 0;
}
