// 6692. 다솔이의 월급 상자
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
		float sum = 0.0f;
		int n;
		cin >> n;
		// 월급의 평균 계산
		for (int i = 0; i < n; i++)
		{
			float p;
			int x;
			cin >> p >> x;
			sum = sum + (p*x);
		}
		// 6자리 까지 출력
		printf("#%d %.6f", test_case, sum);
	}
	return 0;
}
