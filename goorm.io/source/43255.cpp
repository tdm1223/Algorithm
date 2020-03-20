// 약수 구하기
// 2020.03.18
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}
