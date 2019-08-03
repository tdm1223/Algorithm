// 17174. 전체 계산 횟수
// 2019.08.03
// 구현
#include<iostream>

using namespace std;

int main()
{
	int ans = 0;
	int n, m;
	cin >> n >> m;
	while (1)
	{
		// 현재 지폐수를 더해준다.
		ans += n;

		// 묶음이 생기는 경우
		if (n >= m)
		{
			// n을 m으로 나눔
			n /= m;
		}
		// 묶음이 생기지 않는 경우 -> 종료
		else
		{
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
