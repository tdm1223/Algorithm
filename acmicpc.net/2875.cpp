// 2875. 대회 or 인턴
#include <iostream>

using namespace std;
int min(int a, int b)
{
	return a > b ? b : a;
}
int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int ans = min(min(n / 2, m), (n + m - k) / 3);

	cout << ans << endl;
	return 0;
}
