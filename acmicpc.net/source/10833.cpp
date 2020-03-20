// 10833. 사과
// 2019.09.07
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		ans += b % a;
	}
	cout << ans << endl;
	return 0;
}
