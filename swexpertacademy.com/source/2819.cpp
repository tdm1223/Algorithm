// 2819. 격자판의 숫자 이어 붙이기
// 2019.07.16
#include<iostream>
#include<string>
#include<set>

using namespace std;

set<string> s;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int map[4][4];
// 모든 경우를 조사하는 함수
void go(int x, int y, string ans, int cnt)
{
	if (cnt == 6)
	{
		s.insert(ans);
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 4 || yy >= 4 || xx < 0 || yy < 0)
		{
			continue;
		}
		else
		{
			string tmp2 = ans;
			char tmp = map[xx][yy]+'0';
			ans += tmp;
			go(xx, yy, ans, cnt + 1);
			ans = tmp2;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++)
	{
		s.clear();
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cin >> map[i][j];
			}
		}
		// 모든 경우의 수를 만들어서 set에 저장한다.
		// set의 크기가 서로다른 숫자의 개수가 된다.
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				string ans = "";
				ans+=(map[i][j] + '0');
				go(i, j, ans, 0);
			}
		}
		cout << "#" << test_case << " " << s.size() << endl;
	}
	return 0;
}
