// 2019.04.15
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dx[] = { 0,-1,1,0,0 };
int dy[] = { 0,0,0,1,-1 };
int ans;
int map[101][101];
int curDir;
int moveCount;
int alives[10001];
struct shark
{
	int r; // 1~R
	int c; // 1~C
	int s; // 속력 0~1000
	int d; // 방향 1~4
	int z; // 크기 1~10000
	int idx; // 상어 번호
};
// 크기순 정렬
bool compare(shark& a, shark& b)
{
	return a.z < b.z;
}
// 번호순 정렬
bool compare2(shark& a, shark& b)
{
	return a.idx < b.idx;
}
int main()
{
	vector<shark> sharks;
	int r, c, m;
	cin >> r >> c >> m;
	for (int i = 1; i <= m; i++)
	{
		int r, c, s, d, z;
		cin >> r >> c >> s >> d >> z;
		sharks.push_back({ r,c,s,d,z,i });
		map[r][c] = i;
		alives[i] = 1;
	}

	// 낚시왕의 위치
	int cnt = 0;
	while (cnt < c)
	{
		// 번호순 정렬
		sort(sharks.begin(), sharks.end(), compare2);
		// 1.낚시왕이 오른쪽으로 한 칸 이동한다.
		cnt++;

		// 2. 낚시왕이 있는 열에 있는 상어 중에서 가장 땅과 가까운 상어를 잡는다.
		// 상어를 잡으면 격자판에서 잡은 상어가 사라진다.
		for (int i = 1; i <= r; i++)
		{
			if (map[i][cnt] != 0)
			{
				// 잡은 상어는 alive[i]를 0으로 하고 상어 크기를 답에 더함
				alives[map[i][cnt]] = 0;
				ans += sharks[map[i][cnt] - 1].z;
				map[i][cnt] = 0;
				break;
			}
		}

		// 상어 크기순 정렬
		sort(sharks.begin(), sharks.end(), compare);

		// 3. 상어가 이동한다.
		for (int i = 0; i < sharks.size(); i++)
		{
			if (alives[sharks[i].idx] == 1)
			{
				// 현재 상어의 위치에 저장된 값이 자기자신이면 0으로 바꿔줌
				// 아니면 자기보다 크기가 작은 상어가 자신 위치에 온것이므로 내둔다.
				if (map[sharks[i].r][sharks[i].c] == sharks[i].idx)
				{
					map[sharks[i].r][sharks[i].c] = 0;
				}
				int movement = sharks[i].s;
				// 방향에 맞게 상어 이동시키기
				switch (sharks[i].d)
				{
					// 위,아래방향일땐 r-1 *2 시간마다 같은 위치
				case 1:
					movement %= ((r - 1) * 2);
					curDir = 1;
					moveCount = 0;
					while (moveCount < movement)
					{
						if (sharks[i].r == 1)
						{
							curDir = 2;
						}
						else if (sharks[i].r == r)
						{
							curDir = 1;
						}
						sharks[i].r += dx[curDir];
						moveCount++;
					}
					sharks[i].d = curDir;
					map[sharks[i].r][sharks[i].c] = sharks[i].idx;
					break;
				case 2:
					movement %= ((r - 1) * 2);
					curDir = 2;
					moveCount = 0;
					while (moveCount < movement)
					{
						if (sharks[i].r == 1)
						{
							curDir = 2;
						}
						else if (sharks[i].r == r)
						{
							curDir = 1;
						}
						sharks[i].r += dx[curDir];
						moveCount++;
					}
					sharks[i].d = curDir;
					map[sharks[i].r][sharks[i].c] = sharks[i].idx;
					break;
					// 좌, 우 방향일땐 c-1*2 시간마다 같은 위치
				case 3:
					movement %= ((c - 1) * 2);
					curDir = 3;
					moveCount = 0;
					while (moveCount < movement)
					{
						if (sharks[i].c == 1)
						{
							curDir = 3;
						}
						else if (sharks[i].c == c)
						{
							curDir = 4;
						}
						sharks[i].c += dy[curDir];
						moveCount++;
					}
					sharks[i].d = curDir;
					map[sharks[i].r][sharks[i].c] = sharks[i].idx;
					break;
				case 4:
					movement %= ((c - 1) * 2);
					curDir = 4;
					moveCount = 0;
					while (moveCount < movement)
					{
						if (sharks[i].c == 1)
						{
							curDir = 3;
						}
						else if (sharks[i].c == c)
						{
							curDir = 4;
						}
						sharks[i].c += dy[curDir];
						moveCount++;
					}
					sharks[i].d = curDir;
					map[sharks[i].r][sharks[i].c] = sharks[i].idx;
					break;
				}
			}
		}

		// 맵에 0이 아닌 상어 번호가 있다면 alives의 값 증가
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				if (map[i][j] != 0)
				{
					alives[map[i][j]]++;
				}
			}
		}

		// alives의 모든 값을 1을 빼서 0또는 1로 만든다.
		for (int i = 0; i <= m; i++)
		{
			alives[i]--;
		}
	}

	cout << ans << endl;
	return 0;
}
