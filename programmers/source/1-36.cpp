// 모의고사
// 2019.08.30
#include<vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int no1[5] = { 1,2,3,4,5 };
	int no2[8] = { 2,1,2,3,2,4,2,5 };
	int no3[10] = { 3,3,1,1,2,2,4,4,5,5 };
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	for (int i = 0; i < answers.size(); i++)
	{
		if (no1[i % 5] == answers[i])
		{
			c1++;
		}
		if (no2[i % 8] == answers[i])
		{
			c2++;
		}
		if (no3[i % 10] == answers[i])
		{
			c3++;
		}
	}

	int maximum = max(max(c1, c2), c3);
	if (c1 == maximum)
	{
		answer.push_back(1);
	}
	if (c2 == maximum)
	{
		answer.push_back(2);
	}
	if (c3 == maximum)
	{
		answer.push_back(3);
	}
	return answer;
}
