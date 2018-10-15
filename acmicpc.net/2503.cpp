// 2503. 숫자 야구
// 2018.10.15
#include<vector>
#include<iostream>

using namespace std;

int que[3];
int ans[3];
int arr[101][101][101];
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> baseball;
	for (int i = 0; i < n; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < 3; j++)
		{
			int t;
			cin >> t;
			tmp.push_back(t);
		}
		baseball.push_back(tmp);
	}

	int answer = 0;
	for (int i = 123; i <= 987; i++)
	{
		int count = 0;
		que[0] = i / 100;
		que[1] = i / 10 % 10;
		que[2] = i % 10;
		if (!que[1] || !que[2] || que[0] == que[1] || que[1] == que[2] || que[2] == que[0])
		{
			continue;
		}
		for (int j = 0; j < baseball.size(); j++)
		{
			int strike = 0;
			int ball = 0;
			int num = baseball[j][0];
			ans[0] = num / 100;
			ans[1] = num / 10 % 10;
			ans[2] = num % 10;
			for (int k = 0; k < 3; k++)
			{
				if (que[k] == ans[k])
				{
					strike++;
				}
				if (que[k] == ans[(k + 1) % 3] || que[k] == ans[(k + 2) % 3])
				{
					ball++;
				}
			}
			if (strike == baseball[j][1] && ball == baseball[j][2])
			{
				count++;
			}
		}
		if (count == baseball.size())
		{
			answer++;
		}
	}

	cout << answer << endl;
	return 0;
}
