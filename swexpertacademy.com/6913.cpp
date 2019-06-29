// 6913. 동철이의 프로그래밍 대회
// 2019.06.29
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>

using namespace std;

int state[21][21];
int result[21]; // result[i] : i번째 사람이 맞춘 문제 수
int main()
{
	int t;
	cin >> t;

	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n, m;
		cin >> n >> m;
		fill(result, result + 21, 0);
		for (int i = 0; i < 21; i++)
		{
			fill(state[i], state[i] + 21, 0);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> state[i][j];
			}
		}
		// 맞춘 문제 수 계산
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				result[i] += state[i][j];
			}
		}
		// 맞춘 문제수의 최댓값 계산
		int maxVal = 0;
		for (int i = 0; i < 21; i++)
		{
			maxVal = max(result[i], maxVal);
		}

		// 1등한 사람의 수 계산
		int people = 0;
		for (int i = 0; i < 21; i++)
		{
			if (result[i] == maxVal)
			{
				people++;
			}
		}

		// 예외처리 : 아무도 어떠한 문제도 맞추지 못한 상태
		if (maxVal == 0)
		{
			people = n;
		}
		cout << "#" << testCase << " " << people << " " << maxVal << endl;
	}

	return 0;
}
