// 16234. 인구 이동
// 2019.05.22
// 시뮬레이션
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int map[51][51];
int visit[51][51];
// 나라 구조체
struct country
{
	int x; // x 좌표
	int y; // y 좌표
	int people; // 사람수
};
vector<vector<country>> unions; // 연합
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int main()
{
	int cnt = 0;
	int n, l, r;
	cin >> n >> l >> r;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	while (1)
	{
		for (int i = 0; i < n; i++)
		{
			fill(visit[i], visit[i] + n, 0);
		}

		queue<pair<int, int>> q;
		int idx = 0;
		vector<country> tmp; // 같은 연합을 이루는 나라들을 임시 저장하는 벡터
		unions.clear(); // 연합 초기화
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				tmp.clear();
				if (visit[i][j]==0)
				{
					idx++;
					q.push({ i,j });
					visit[i][j] = idx;
					tmp.push_back({ i,j,map[i][j] });
					// BFS
					while (!q.empty())
					{
						int x = q.front().first;
						int y = q.front().second;
						q.pop();
						for (int k = 0; k < 4; k++)
						{
							int xx = x + dx[k];
							int yy = y + dy[k];

							// 범위를 벗어나면 무시
							if (xx < 0 || yy < 0 || xx >= n || yy >= n)
							{
								continue;
							}

							// 두 나라의 인구수 차이 계산
							int diff = map[x][y] - map[xx][yy] > 0 ? map[x][y] - map[xx][yy] : map[xx][yy] - map[x][y];

							// 인구수 차이가 l과 r사이이고 아직 방문하지 않은 곳이면 같은곳으로 저장(개방)
							if (visit[xx][yy] == 0 && diff >= l && diff <= r)
							{
								visit[xx][yy] = idx;
								q.push({ xx,yy });
								tmp.push_back({ xx,yy,map[xx][yy] });
							}
						}
					}
					// 개방할 나라들을 모은 벡터를 연합에 저장
					unions.push_back(tmp);
				}
			}
		}
		// visit 배열에 모두 다른 번호가 입력될때 인구이동이 없음
		if (idx == n * n)
		{
			break;
		}
		// 인구 이동 횟수 증가
		cnt++;
		// 연합을 이루고 있는 각칸들의 인구수 조정
		for (int i = 0; i < unions.size(); i++)
		{
			// 합을 구함
			int sum = 0;
			for (int j = 0; j < unions[i].size(); j++)
			{
				sum += unions[i][j].people;
			}
			// 각 칸에 합/수 한것을 저장
			for (int j = 0; j < unions[i].size(); j++)
			{
				map[unions[i][j].x][unions[i][j].y] = sum / unions[i].size();
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
