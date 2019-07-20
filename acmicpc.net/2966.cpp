// 2966. 찍기
// 2019.07.20
// 브루트 포스
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	pair<string, int> people[3]; // 아이디, 점수로 구성된 배열
	people[0] = { "Adrian",0 };
	people[1] = { "Bruno",0 };
	people[2] = { "Goran",0 };

	char A[3] = { 'A','B','C' };
	char B[4] = { 'B','A','B','C' };
	char C[6] = { 'C','C','A','A','B','B' };
	// 정답 체크
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == A[i % 3])
		{
			people[0].second++;
		}
		if (s[i] == B[i % 4])
		{
			people[1].second++;
		}
		if (s[i] == C[i % 6])
		{
			people[2].second++;
		}
	}
	// 최고점수 구함
	int maxScore = max(max(people[0].second, people[1].second), people[2].second);
	cout << maxScore << endl;
	// 최고점수랑 같은사람 출력
	for (int i = 0; i < 3; i++)
	{
		if (people[i].second == maxScore)
		{
			cout << people[i].first << endl;
		}
	}
	return 0;
}
