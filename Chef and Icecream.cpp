# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int f=0;
		int b=true;
		int ten=0;
		int fif=0;
		if(a[0]==5)
		{
			f++;
			for(int j=1;j<n;j++)
			{
				if(a[j]==5)
				{
					f++;
					continue;
				}
				else if(a[j]==10)
				{
					if(f!=0)
					{
						f--;
						ten++;
						continue;
					}
					else
					{
						cout<<"NO"<<endl;
						b=false;
						break;
					}
				}
				else
				{
					if(ten!=0)
					{
						ten--;
						fif++;
						continue;
					}
					else if(f>=2)
					{
						f=f-2;
						fif++;
						continue;
					}
					else
					{
						cout<<"NO"<<endl;
						b=false;
						break;
					}
				}
			}
			if(b)
			{
				cout<<"YES"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
