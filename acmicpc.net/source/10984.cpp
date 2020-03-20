// 10984. 내 학점을 구해줘
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		// 총 학점
		int score = 0;
		// 평점
		double gpa = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int c;
			float g;
			cin >> c >> g;
			score += c;
			gpa += c * g;
		}
		// 결과 출력
		printf("%d %.1lf\n", score, gpa / score);
	}
	return 0;
}
