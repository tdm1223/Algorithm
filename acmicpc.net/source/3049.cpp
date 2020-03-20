// 3049. 다각형의 대각선
// 2019.05.21
// 수학
#include<iostream>

using namespace std;

int main()
{
	int n;
	// 볼록 N각형의 교차점의 개수는 nC4이다.
	cin >> n;
	int ans = 0;
	if (n < 4) // 4보다 작으면 0
	{
		ans = 0;
	}
	else // nC4를 구한다.
	{
		ans = n * (n - 1)*(n - 2)*(n - 3) / 24;
	}

	cout << ans << endl;
	return 0;
}
