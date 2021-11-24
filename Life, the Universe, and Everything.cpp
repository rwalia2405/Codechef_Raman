# include <iostream>
# include <vector>
using namespace std;
int main()
{
	vector<int>a;
	int n;
	while(true)
	{
		cin>>n;
		if(n==42)
		{
			break;
		}
		a.push_back(n);
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==42)
		{
			break;
		}
		cout<<a[i]<<endl;
	}
	return 0;
}
