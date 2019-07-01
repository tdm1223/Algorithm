// 3314. 보충학습과 평균
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
		int sum = 0;
		for (int i = 0; i < 5; i++)
		{
			int score;
			cin >> score;
			if (score < 40)
			{
				score = 40;
			}
			// 보충학생이 보충을 받음
			sum += score;
		}
		cout << "#" << test_case << " " << sum / 5 << endl;

	}
	return 0;
}
