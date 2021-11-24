# include <iostream>
# include <string>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		string s;
		cin>>s;
		if(s.length()<=1)
		{
			cout<<s<<endl;
		}
		for(long long int j=0;j<s.length()-2;j++)
		{
			if(s[j]=='1' && s[j+1]=='0' && s[j+2]=='0')
			{
				s.erase(s.begin()+j+1);
				j=-1;
			}
			else if(s[j]=='1' && s[j+1]=='0' && s[j+2]=='1')
			{
				s.erase(s.begin()+j);
				j=-1;
			}
			else if(s[j]=='1' && s[j+1]=='1' && s[j+2]=='0')
			{
				s.erase(s.begin()+j+1);
				j=-1;
			}
			else if(s[j]=='0' && s[j+1]=='1' && s[j+2]=='0')
			{
				s.erase(s.begin()+j+2);
				j=-1;
			}
			else
			{
				continue;
			}
		}
		if(s.length()==2)
		{
			if(s[0]==1&&s[1]==0)
			{
				s.erase(s.begin()+1);
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
