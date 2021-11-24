# include <iostream>
# include <cmath>
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
		cout<<int(sqrt(b[i]))<<endl;
	}
	return 0;
}
