// 1258. 행렬찾기
// 2019.07.21
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int map[101][101];
int n;

// 행렬 구조체
struct matrix
{
	int x;
	int y;
	int size;
	matrix(int x, int y) :x(x), y(y), size(x*y) {}
};
// 비교할때 같은 크기면 행이 작은 순으로 정렬하는 함수
bool compare(const matrix& a, const matrix& b)
{
	if (a.size == b.size)
	{
		return a.x < b.x;
	}
	else
	{
		return a.size < b.size;
	}

}
// 행렬 찾는 함수
pair<int, int> Find(int x, int y)
{
	int row = 1;
	int col = 1;
	int x1 = x;
	int y1 = y;
	while (1)
	{
		if (x1 + 1 >= n || map[x1 + 1][y] == 0)
		{
			break;
		}
		row++;
		x1++;
	}
	while (1)
	{
		if (y1 + 1 >= n || map[x][y1 + 1] == 0)
		{
			break;
		}
		col++;
		y1++;
	}
	for (int i = x; i < x + row; i++)
	{
		for (int j = y; j < y + col; j++)
		{
			map[i][j] = 0;
		}
	}
	return { row,col };
}

int main()
{
	int t;
	cin >> t;
	vector<matrix> v;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		v.clear();
		for (int i = 0; i < n; i++)
		{
			fill(map[i], map[i] + n, 0);
		}
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> map[i][j];
			}
		}

		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (map[i][j] != 0)
				{
					cnt++;
					pair<int, int> tmp = Find(i, j);
					v.push_back(matrix(tmp.first, tmp.second));
				}
			}
		}

		sort(v.begin(), v.end(), compare);
		cout << "#" << testCase << " " << cnt << " ";
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i].x << " " << v[i].y << " ";
		}
		cout << endl;
	}

	return 0;
}
