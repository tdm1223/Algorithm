// 2660. 회장뽑기
// 2019.05.20
// 플로이드 와샬 알고리즘
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int d[51][51];
int main()
{
	int n;
	cin >> n;
	while(1)
	{
		int from, to;
		cin >> from >> to;
		if (from == -1 && to == -1)
		{
			break;
		}
		d[from][to] = 1;
		d[to][from] = 1;
	}

	// 회원들의 점수를 계산하는 과정
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			if (d[from][i] == 0)
			{
				continue;
			}
			for (int to = 1; to <= n; to++)
			{
				// i에서 to로 가는 방법이 없거나 출발지=도착지 일땐 무시
				if (d[i][to] == 0 || from == to)
				{
					continue;
				}
				// 친구 점수 최소로 갱신
				if (d[from][to] == 0 || d[from][to] > d[from][i] + d[i][to])
				{
					d[from][to] = d[from][i] + d[i][to];
				}
			}
		}
	}

	int sum = 51; // 얻을 수 있는 점수 중 최솟값을 저장하는 변수
	vector<pair<int, int>> v;
	for (int i = 1; i <= n; i++)
	{
		int tmp = 0; // 회원의 점수
		for (int j = 1; j <= n; j++)
		{
			tmp = max(tmp, d[i][j]);
		}
		v.push_back({ tmp,i }); // 점수의 회원의 번호 저장
		sum = min(sum, tmp); // 최솟값 갱신
	}

	vector<int> ans;
	for (int i = 0; i < v.size(); i++)
	{
		// 회원의 점수가 최솟값과 같다면 회원의 번호 저장
		if (v[i].first == sum)
		{
			ans.push_back(v[i].second);
		}
	}

	cout << sum << " " << ans.size() << endl;
	sort(ans.begin(), ans.end()); // 회원의 번호 오름차순 출력
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
