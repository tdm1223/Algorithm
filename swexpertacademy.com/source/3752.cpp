// 3752. 가능한 시험 점수
// 2019.07.08
#include<iostream>

using namespace std;

int visit[10001];
int score[101];
int main()
{
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++)
	{
		int n;
		cin >> n;
		fill(visit, visit + 10001, 0);
		int count = 0;
		visit[0] = 1; // 0점은 가능
		count++;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> score[i];
		}

		for (int i = 0; i < n; i++)
		{
			int curScore = score[i];
			for (int j = sum; j >= 0; j--)
			{
				// 가능한 시험점수라면 true로
				if (visit[j] && !visit[j + curScore])
				{
					count++; // 개수 증가
					visit[j + curScore] = true;
				}
			}
			sum += curScore;
		}
		printf("#%d %d\n", test_case, count);
	}
	return 0;
}
