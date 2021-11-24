# include <iostream>
# include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int p=0;
		for(int j=0;j<s.length()-1;j++)
		{
			if(s[j]!=s[j+1])
			{
				p++;
				j++;
			}
		}
		cout<<p<<endl;
	}
	return 0;
}
