// 10708. 크리스마스 파티
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int target[101]; // target[i] : i번째 게임의 타겟
int people[101]; // people[i] : i번째 친구의 점수
int score[101]; // 매 판마다의 점수
int main()
{
	int n, m;
	cin >> n >> m;
	// 게임의 횟수번 만큼 입력을 받음
	for (int i = 1; i <= m; i++)
	{
		cin >> target[i];
	}

	for (int i = 1; i <= m; i++)
	{
		// 친구들의 점수 입력
		int count = 0;
		for (int j = 1; j <= n; j++)
		{
			cin >> score[j];
			if (score[j] == target[i])
			{
				people[j]++;
			}
			else
			{
				count++;
			}
		}
		people[target[i]] += count;
	}
	// 결과 출력
	for (int i = 1; i <= n; i++)
	{
		cout << people[i] << endl;
	}
	return 0;
}
