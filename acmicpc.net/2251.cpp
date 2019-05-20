// 2251. 물통
// 2019.05.20
// BFS
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

bool visit[201][201]; // visit[a][b] : A,B의 물의 양이 a,b일때 방문 여부
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = c;
	queue<pair<int, int>> q;
	q.push({ 0,0 });
	visit[0][0] = true;
	vector<int> ans;
	ans.push_back(c); // 처음 C의 물의 양도 답이 될 수 있음.
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		int z = sum - x - y;
		q.pop();
		int xx, yy, zz;

		// 1. x -> y로 물 이동
		xx = x;
		yy = y;
		zz = z;
		yy += xx;
		xx = 0;
		if (yy >= b) // 넘치는 양은 다시 x에
		{
			xx = yy - b;
			yy = b;
		}
		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			q.push({ xx, yy });
			if (xx == 0)
			{
				ans.push_back(zz);
			}
		}

		// 2. x -> z
		xx = x;
		yy = y;
		zz = z;
		zz += xx;
		xx = 0;
		if (zz >= c) // 넘치는 양은 다시 x에
		{
			xx = zz - c;
			zz = c;
		}
		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			q.push({ xx, yy });
			if (xx == 0)
			{
				ans.push_back(zz);
			}
		}

		// 3. y -> x
		xx = x;
		yy = y;
		zz = z;
		xx += yy;
		yy = 0;
		if (xx >= a) // 넘치는 양은 다시 y에
		{
			yy = xx - a;
			xx = a;
		}
		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			q.push({ xx, yy });
			if (xx == 0)
			{
				ans.push_back(zz);
			}
		}

		// 4. y -> z
		xx = x;
		yy = y;
		zz = z;
		zz += yy;
		yy = 0;
		if (zz >= c) // 넘치는 양은 다시 y에
		{
			yy = zz - c;
			zz = c;
		}
		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			q.push({ xx, yy });
			if (xx == 0)
			{
				ans.push_back(zz);
			}
		}

		// 5. z -> x
		xx = x;
		yy = y;
		zz = z;
		xx += zz;
		zz = 0;
		if (xx >= a) // 넘치는 양은 다시 z에
		{
			zz = xx - a;
			xx = a;
		}
		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			q.push({ xx, yy });
			if (xx == 0)
			{
				ans.push_back(zz);
			}
		}

		// 6. z -> y
		xx = x;
		yy = y;
		zz = z;
		yy += zz;
		zz = 0;
		if (yy >= b) // 넘치는 양은 다시 z에
		{
			zz = yy - b;
			yy = b;
		}
		if (!visit[xx][yy])
		{
			visit[xx][yy] = true;
			q.push({ xx, yy });
			if (xx == 0)
			{
				ans.push_back(zz);
			}
		}
	}

  // 오름차순 정렬
	sort(ans.begin(), ans.end());
	for (int i=0;i<ans.size();i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
