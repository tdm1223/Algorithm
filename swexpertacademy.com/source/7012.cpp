// 7012. 준홍이의 카드놀이
// 2019.06.29
#include<iostream>
#include<algorithm>

using namespace std;

int result[41]; // result[i] : i가 등장하는 횟수
int main()
{
	int t;
	cin >> t;

	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n, m;
		cin >> n >> m;
		fill(result, result + 40, 0);
		// 이중for문으로 선택하는 모든 경우의 합을 result에 저장
		// result[i]의 값이 클수록 i의 등장 확률이 높다.
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				result[i + j]++;
			}
		}

		int maxVal = 0;
		for (int i = 1; i <= 40; i++)
		{
			maxVal = max(maxVal, result[i]);
		}

		// 가장 등장할 확률이 높은것들 출력
		cout << "#" << testCase << " ";
		for (int i = 1; i <= 40; i++)
		{
			if (result[i] == maxVal)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
