// 16235. 나무 재테크
// 2019.10.18
// 시뮬레이션, BFS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int n, m, year;
int feed[11][11];
int map[11][11];
int ans;

// 나무를 나타내는 구조체
struct Tree
{
	int x; // x좌표
	int y; // y좌표
	int age; // 나이
};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m >> year;

	// 양분입력
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> feed[i][j];
			map[i][j] = 5;
		}
	}

	// 나무 입력
	int x, y, age;
	vector<int> trees[11][11];
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y >> age;
		trees[x][y].push_back(age);
	}

	while (year--)
	{
		vector<Tree> dead; // 죽은 나무
		vector<Tree> five; // 5의 배수가 되어 가을에 번식할 나무

		// 봄
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (trees[i][j].empty())
				{
					continue;
				}

				vector<int> tmp; // 양분을 먹이고 살아남은 나무들을 임시 저장
				sort(trees[i][j].begin(), trees[i][j].end()); // 해당 위치의 나무를 나이가 적은순으로 정렬
				for (int k = 0; k < trees[i][j].size(); k++)
				{
					age = trees[i][j][k];
					if (map[i][j] >= age)
					{
						map[i][j] -= age;
						tmp.push_back(age + 1);
						if ((age + 1) % 5 == 0)
						{
							five.push_back({ i, j, age + 1 });
						}
					}
					else
					{
						dead.push_back({ i, j, age });
					}
				}
				trees[i][j] = tmp; // 해당위치의 나무들을 갱신해준다.
			}
		}

		// 여름
		// 죽은 나무의 나이/2만큼 양분을 추가한다.
		for (int i = 0; i < dead.size(); i++)
		{
			map[dead[i].x][dead[i].y] += dead[i].age / 2;
		}

		// 가을
		// 5의 배수인 나무가 주면 8칸으로 번식한다.
		for (int k = 0; k < five.size(); k++)
		{
			int x = five[k].x;
			int y = five[k].y;

			for (int i = 0; i < 8; i++)
			{
				int xx = x + dx[i];
				int yy = y + dy[i];

				if (xx<1 || xx>n || yy<1 || yy>n)
				{
					continue;
				}
				trees[xx][yy].push_back(1);
			}
		}

		//겨울
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				map[i][j] += feed[i][j];
			}
		}

	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			ans += trees[i][j].size();
		}
	}
	cout << ans << "\n";
	return 0;
}
