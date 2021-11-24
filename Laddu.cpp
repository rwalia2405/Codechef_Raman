# include <iostream>
# include <string>
# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a;
		cin>>a;
		string I;
		cin>>I;
		int c=0;
		for(int j=0;j<a;j++)
		{
			string s;
			cin>>s;
			if(s=="CONTEST_WON"||s=="BUG_FOUND")
			{
				int b;
				cin>>b;
				if(s=="CONTEST_WON")
				{
					if(b>20)
					{
						c+=300;
					}
					else
					{
						c+=300+(20-b);
					}
				}
				else
				{
					c+=b;
				}
			}
			else
			{
				if(s=="TOP_CONTRIBUTOR")
				{
					c+=300;
				}
				else
				{
					c+=50;
				}
			}
		}
		if(I=="INDIAN")
		{
			cout<<c/200<<endl;
		}
		else
		{
			cout<<c/400<<endl;
		}
	}
	return 0;
}
