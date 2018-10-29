// 완주하지 못한 선수
// 2018.10.29
#include<string>
#include<vector>
#include<map>

using namespace std;

map<string, int> m;
string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";
	//삽입, 동명이인 허용
	for (int i = 0; i<participant.size(); i++)
	{
		string tmp = participant[i];
		if (m.find(tmp) != m.end())
		{
			m[tmp]++;
		}
		else
		{
			m[tmp] = 1;
		}
	}

	//검색
	for (int i = 0; i<completion.size(); i++)
	{
		string tmp = completion[i];
		if (m[tmp] == 1)
		{
			m.erase(tmp);
		}
		else
		{
			m[tmp]--;
		}
	}
	answer = m.begin()->first;
	return answer;
}
