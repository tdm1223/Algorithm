// 2580. 스도쿠
// 2019.05.20
// 백트래킹
#include<iostream>
#include<vector>

using namespace std;

int map[10][10];	// 스도쿠 판
vector<pair<int, int>> zeros;	// 0의 위치 저장
bool flag;

vector<int> Check(int x, int y)
{
	vector<int> possible;
	int num[10];
	fill(num, num + 10, 0);

	// 가로 검사
	for (int i = 0; i < 9; i++)
	{
		num[map[x][i]]++;
	}

	// 세로 검사
	for (int i = 0; i < 9; i++)
	{
		num[map[i][y]]++;
	}

	// 주위 9칸 검사
	int xx = (x / 3) * 3;
	int yy = (y / 3) * 3;
	for (int i = xx; i < xx + 3; i++)
	{
		for (int j = yy; j < yy + 3; j++)
		{
			num[map[i][j]]++;
		}
	}

	// 1부터 9까지 가로,세로,주위칸에 없는것은 넣을수 있는 숫자
	for (int i = 1; i < 10; i++)
	{
		if (num[i] == 0)
		{
			possible.push_back(i);
		}
	}
	return possible;
}

// cnt : 현재까지 채운 빈칸의 개수
void go(int cnt)
{
	// 한번 출력했으면 탈출
	if (flag)
	{
		return;
	}

	// 모든 빈칸이 다 채워지면 출력 zeros.size() : 기존 0의 개수
	if (cnt == zeros.size())
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << map[i][j] << " ";
			}
			cout << "\n";
		}
		flag = true;
		return;
	}

	int x = zeros[cnt].first;
	int y = zeros[cnt].second;

	// 빈칸에서 가능한 숫자 받아오기
	vector<int> possible = Check(x, y);

	// 가능한 숫자들로 탐색
	for (int i = 0; i < possible.size(); i++)
	{
		int num = possible[i];
		map[x][y] = num;
		go(cnt + 1);
		map[x][y] = 0;
	}
}

int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 0)
			{
				zeros.push_back({ i,j });
			}
		}
	}
	go(0);
	return 0;
}
