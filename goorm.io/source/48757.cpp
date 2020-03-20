// 369 게임
// 2020.03.21
#include <iostream>

using namespace std;

int check(int n)
{
	int res = 0;
	while(n>0)
	{
		int k = n%10;
		if(k==3 || k==6 || k==9)
		{
			res++;
		}
		n/=10;
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	int ans = 0;
	for(int i=1;i<n;i++)
	{
		ans += check(i);
	}
	cout<<ans<<endl;
	return 0;
}
