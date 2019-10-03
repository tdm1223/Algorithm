// 2828. 사과 담기 게임
// 2019.10.03
// 반복문, 그리디 알고리즘
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int left = 1; // 바구니 왼쪽끝 위치
	int right = m; // 바구니 오른쪽끝 위치

	int ans = 0;
	int j;
	cin >> j;
	for (int i = 0; i < j; i++)
	{
		int k;
		cin >> k;
		if (k >= left && k <= right)
		{
			continue;
		}
		// 사과 떨어지는 위치가 바구니 오른쪽 값보다 큰 경우
		else if (k > right)
		{
			ans += k - right;
			left += k - right;
			right += k - right;
		}
		// 사과 떨어지는 위치가 바구니 왼쪽 값보다 작은 경우
		else if (k < left)
		{
			ans += left - k;
			right -= left - k;
			left -= left - k;
		}
	}
	cout << ans << endl;
	return 0;
}
