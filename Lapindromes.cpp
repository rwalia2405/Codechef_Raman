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
		int n=s.length()/2;
		int a[26]={0};
		int b[26]={0};
		for(int j=0;j<n;j++)
		{
			a[int(s[j])-97]++;	
		}
		if(s.length()%2==0)
		{
		for(int j=n;j<s.length();j++)
		{
			b[int(s[j])-97]++;	
		}
		}
		else
		{
		for(int j=n+1;j<s.length();j++)
		{
			b[int(s[j])-97]++;	
		}			
		}
		bool f=true;
		for(int j=0;j<26;j++)
		{
			if(a[j]!=b[j])
			{
				f=false;
				break;
			}
		}
		if(f)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
