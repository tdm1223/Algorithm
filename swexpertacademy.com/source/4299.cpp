// 4299. 태혁이의 사랑은 타이밍
// 2019.07.01
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int d, h, m;
		cin >> d >> h >> m;
		// 시간 차이 계산
		int sum = 1440 * (d - 11) + 60 * (h - 11) + m - 11;
		if (sum >= 0)
		{
			cout << "#" << test_case << " " << sum << endl;
		}
		// 약속 전에 차였을 경우
		else
		{
			cout << "#" << test_case << " -1" << endl;
		}
	}
	return 0;
}
