// 3과 5의 배수
// 2020.03.18
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%3==0 || i%5==0)
		{
			sum+=i;
		}
	}
	cout<<sum<<endl;
	return 0;
}
