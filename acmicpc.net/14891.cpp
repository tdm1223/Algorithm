// 14891. 톱니바퀴
// 2019.05.22
// 시뮬레이션
#include<iostream>
#include<string>
#include<vector>

using namespace std;

string gear[5];
int visit[5];
vector<pair<int, int>> rotateGear;

// 톱니바퀴 회전 dir=1이면 시계방향, dir=-1이면 반시계방향
void rotate(string& cur, int dir)
{
	string tmp = "";
	if (dir == 1)
	{
		tmp = cur[cur.size() - 1] + cur.substr(0, cur.size() - 1);
	}
	else
	{
		tmp = cur.substr(1, cur.size()) + cur[0];
	}
	cur = tmp;
}

// 톱니가 돌아가는지 판단하는 함수
void go(int idx, int dir)
{
	visit[idx] = 1;

	// 오른쪽과 비교
	if (idx + 1 <= 4 && !visit[idx + 1])
	{
		if (gear[idx][2] != gear[idx + 1][6])
		{
			rotateGear.push_back({ idx + 1,dir*-1 });
			go(idx + 1, dir*-1);
		}
	}

	// 왼쪽과 비교
	if (idx - 1 >= 1 && !visit[idx - 1])
	{
		if (gear[idx][6] != gear[idx - 1][2])
		{
			rotateGear.push_back({ idx - 1,dir*-1 });
			go(idx - 1, dir*-1);
		}
	}
}
int main()
{
	for (int i = 1; i <= 4; i++)
	{
		cin >> gear[i];
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int idx, dir;
		cin >> idx >> dir;
		// 방문배열 초기화
		fill(visit, visit + 5, 0);
		rotateGear.clear();
		go(idx, dir);

		for (int j = 0; j < rotateGear.size(); j++)
		{
			rotate(gear[rotateGear[j].first], rotateGear[j].second); // 돌아가야하는 톱니 모두 돌림
		}
		rotate(gear[idx], dir); // 현재 인덱스 톱니 돌림
	}

	int ans = 0;
	for (int j = 1; j <= 4; j++)
	{
		if (gear[j][0] == '1')
		{
			ans += (1 << (j - 1));
		}
	}
	cout << ans << endl;
	return 0;
}
