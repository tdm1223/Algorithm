// 15818. 오버플로우와 모듈러
// 2019.07.30
// 수학
#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int x;
	cin >> x;
	long long ans = x % m;
	for (int i = 1; i < n; i++)
	{
		int k;
		cin >> k;
		ans = (ans * (k%m)) % m;
	}
	cout << ans << endl;
	return 0;
}
