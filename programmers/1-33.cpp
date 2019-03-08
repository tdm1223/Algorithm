// 스킬트리
// 2019.03.08
#include<string>
#include<vector>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
	int answer = 0;

	for (int i = 0; i < skill_trees.size(); i++)
	{
		string curString = skill_trees[i];
		string tmp = "";
		// 현재 스킬트리중 스킬과 같은것이 있다면 tmp에 저장
		for (int j = 0; j < curString.size(); j++)
		{
			for (int k = 0; k < skill.size(); k++)
			{
				if (curString[j] == skill[k])
				{
					tmp += curString[j];
				}
			}
		}

		// skill의 접두사들중 tmp와 같은것이 있다면 answer+1
		for (int i = skill.size(); i >= 0; i--)
		{
			if (skill.substr(0, i) == tmp)
			{
				answer++;
			}
		}
	}
	return answer;
}
