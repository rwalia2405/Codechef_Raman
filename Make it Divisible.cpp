# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		string s;
		int p=n;
		while(n>1)
		{
			s.push_back('3');
			n--;
		}
		if(p%3==0) s.push_back('9');
		else s.push_back('3');
		cout<<s<"\n";
	}
	return 0;
}
