// 2506. 점수계산
// 2019.08.23
// 구현
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int score;
		cin >> score;
		if (score == 1)
		{
			cnt++;
			ans += cnt;
		}
		else
		{
			cnt = 0;
		}
	}
	cout << ans << endl;
	return 0;
}
