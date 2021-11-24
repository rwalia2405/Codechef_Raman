# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<a;i++)
	{
		if(b[i]<10) cout<<"What an obedient servant you are!"<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
