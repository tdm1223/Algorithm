// 9498. 시험 성적
// 2018.12.16
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

	cout << score << endl;
	return 0;
}
