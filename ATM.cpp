# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	int a;
	float b;
	cin>>a>>b;
	if(a>0&&a<2000&&a%5==0&&(a+0.50)<b&&b>0&&b<2000) cout<<setprecision(2)<<fixed<<b-(a+.50);
	else if(a>0&&a<2000&&a%5!=0||a+0.50>b&&b>0&&b<2000) cout<<setprecision(2)<<fixed<<b;
	return 0;
}
