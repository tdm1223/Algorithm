// 6730. 장애물 경주 난이도
// 2019.06.29
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, before;
		int up = 0;
		int down = 0;
		cin >> n;
		cin >> before; // 비교대상이 될 이전값. 첫번째 입력값으로 초기화
		// 문제에서 주어진 대로 내려가고 올라가는것에 대한 난이도 계산
		for (int i = 1; i < n; i++)
		{
			int now;
			cin >> now;
			if (before > now)
			{
				down = down > before - now ? down : before - now;
			}
			else
			{
				up = up > now - before ? up : now - before;
			}
			before = now;
		}
		cout << "#" << test_case << " " << up << " " << down << endl;
	}
	return 0;
}
