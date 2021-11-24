# include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
	cin>>b[i];
	for(int i=0;i<a;i++)
	{
		int count=0;
		while(b[i]>0)
		{
			if(b[i]-100>=0) 
			{
				b[i]=b[i]-100;
				count++;
				continue;
			}
			if(b[i]-50>=0) 
			{
				b[i]=b[i]-50;
				count++;
				continue;
			}	
			if(b[i]-10>=0) 
			{
				b[i]=b[i]-10;
				count++;
				continue;
			}	
			if(b[i]-5>=0) 
			{
				b[i]=b[i]-5;
				count++;
				continue;
			}
			if(b[i]-2>=0) 
			{
				b[i]=b[i]-2;
				count++;
				continue;
			}			
			if(b[i]-1>=0) 
			{
				b[i]=b[i]-1;
				count++;
				continue;
			}										
		}
		cout<<count<<endl;
	}	
	return 0;
}
