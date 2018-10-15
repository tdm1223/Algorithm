// 2193. 이친수
// 2018.10.15
#include <iostream>

using namespace std;

long long d[91]; //d[n] : n자리 이친수의 개수
int main()
{
	int n;
	cin >> n;
	d[1] = 1;//1
	d[2] = 1;//10
	//점화식을 작성해보면 1,1,2,3,5,8개 순으로 이친수의 개수가 증가하게 된다.
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}

	cout << d[n] << endl;
	return 0;
}
