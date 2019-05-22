// 9498. 시험 성적
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int main()
{
	int n;
	char score;
	cin >> n;
	// 점수에 따른 학점 구분
	if (n >= 90 && n <= 100)
	{
		score = 'A';
	}
	else if (n >= 80)
	{
		score = 'B';
	}
	else if (n >= 70)
	{
		score = 'C';
	}
	else if (n >= 60)
	{
		score = 'D';
	}
	else
	{
		score = 'F';
	}
	// 결과 출력
	cout << score << endl;
	return 0;
}
