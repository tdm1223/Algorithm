// 최소값
// 2020.03.21
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans = 2147483647;
	int k;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		ans = ans > k ? k : ans;
	}
	cout<<ans<<endl;
	return 0;
}
