// 16673. 고려대학교에는 공식 와인이 있다
// 2019.08.08
// 구현
#include<iostream>

using namespace std;

int main()
{
	int c, k, p;
	cin >> c >> k >> p;

	// 공식 적용
	int ans = 0;
	for (int i = 1; i <= c; i++)
	{
		ans += k * i + p * i*i;
	}
	cout << ans << endl;
	return 0;
}
