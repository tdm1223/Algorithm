// 5371. Annoying Mosquitos
// 2019.04.11
#include<iostream>
#include<vector>

using namespace std;

// 모기 구조체 (위치,공격여부)
struct mosquito
{
	int x;
	int y;
	bool attack;
};
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int cnt = 0;
		int n; // 모기 수
		cin >> n;
		vector<mosquito> mosquitos; // 모기들의 위치
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			mosquitos.push_back({ x,y,false });
		}

		int m;
		cin >> m; // lee가 공격하는 횟수
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y; // lee가 공격하는 좌표
			for (int j = 0; j < mosquitos.size(); j++)
			{
				// 공격 가능하다면
				if (abs(mosquitos[j].x - x) <= 50 && abs(mosquitos[j].y - y) <= 50 && !mosquitos[j].attack)
				{
					cnt++; // 공격한 모기 숫자 증가
					mosquitos[j].attack = true;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
