// 1834. 나머지와 몫이 같은 수
// 2018.12.03
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long sum = 0;

	// n일때 n-1개만큼 n+1의 배수가 나머지와 몫이 같은 수가 된다.
	// n = 2면 3, n = 3 이면 4, 8 ...
	for (long long i = 1; i < n; i++)
	{
		sum += n * i + i;
	}
	cout << sum << endl;
	return 0;
}
