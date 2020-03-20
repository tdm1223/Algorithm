// 1005. ACM Craft
// 2019.05.14
// 위상 정렬
#include<vector>
#include<queue>
#include<iostream>

using namespace std;

int time[1001]; // time[i] : i 건물을 건설하는데 걸리는 시간
int build[1001]; // build[i] : i 건물을 건설하는데 필요한 선행 건물의 개수
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		// n : 건물의 개수 / k : 건설순서규칙의 개수
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> time[i];
			build[i] = 0;
		}

		vector<vector<int>> order(n + 1); //순서를 저장. order[i]에는 i건물을 지을때 필요한 선행 건물들의 번호 저장
		for (int i = 0; i < k; i++)
		{
			int a, b;
			cin >> a >> b;
			order[a].push_back(b);
			build[b]++;
		}

		vector<int> ans(n + 1);
		queue<int> q;
		for (int i = 1; i <= n; i++)
		{
			//선행 건물이 존재하지 않는 건물의 번호를 큐에 넣음
			if (!build[i])
			{
				q.push(i);
				ans[i] = time[i];
			}
		}

		int w;
		cin >> w;
		while (!q.empty())
		{
			int m = 0;
			int current = q.front();
			q.pop();
			if (current == w)//이번에 지으려는 건물이 W이면 끝
			{
				break;
			}

			//현재 지으려는 건물을 짓고 관련된 건물들의 속성(선행건물의 갯수, 시간)을 조정
			for (int i = 0; i < order[current].size(); i++)
			{
				int tmp = order[current][i];

				build[tmp]--; //선행건물의 갯수를 한개 줄인다.

				// 시간 갱신
				if (ans[tmp] < ans[current] + time[tmp])
				{
					ans[tmp] = ans[current] + time[tmp];
				}

				//current 건물을 지으면 더이상 선행건물이 없는 건물들을 큐에 넣어준다.
				if (!build[tmp])
				{
					q.push(tmp);
				}
			}
		}
		cout << ans[w] << endl;
	}
	return 0;
}
