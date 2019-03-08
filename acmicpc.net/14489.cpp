// 14489. 치킨 두 마리(...)
// 2019.03.08
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b;
	int ans = (sum >= 2 * c) ? (sum - 2 * c) : sum;
	cout << ans << endl;
	return 0;
}
