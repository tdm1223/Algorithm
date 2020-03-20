// 2754. 학점계산
// 2019.09.03
// 입문용
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, float> scores;
	scores["A+"] = 4.3f;
	scores["A0"] = 4.0f;
	scores["A-"] = 3.7f;
	scores["B+"] = 3.3f;
	scores["B0"] = 3.0f;
	scores["B-"] = 2.7f;
	scores["C+"] = 2.3f;
	scores["C0"] = 2.0f;
	scores["C-"] = 1.7f;
	scores["D+"] = 1.3f;
	scores["D0"] = 1.0f;
	scores["D-"] = 0.7f;
	scores["F"] = 0.0f;

	string s;
	cin >> s;
	printf("%.1f", scores[s]);
	return 0;
}
