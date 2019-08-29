// 뉴스 클러스터링
// 2019.08.29
#include<string>
#include<list>
#include<iostream>

using namespace std;

int solution(string str1, string str2) {
	int answer = 0;
  // str1, str2 모두 소문자로 바꿔줌
	for (int i = 0; i < str1.size(); i++)
	{
		str1[i] = tolower(str1[i]);
	}
	for (int i = 0; i < str2.size(); i++)
	{
		str2[i] = tolower(str2[i]);
	}
  // s1에 str1 중 조건을 만족하는 원소를 저장함.
	list<string> s1;
	for (int i = 0; i < str1.size() - 1; i++)
	{
		if ((str1[i] >= 'a' && str1[i] <= 'z') && (str1[i + 1] >= 'a'&&str1[i + 1] <= 'z'))
		{
			s1.push_back(str1.substr(i, 2));
		}
	}
  // s2에 str1 중 조건을 만족하는 원소를 저장함.
	list<string> s2;
	for (int i = 0; i < str2.size() - 1; i++)
	{
		if ((str2[i] >= 'a' && str2[i] <= 'z') && (str2[i + 1] >= 'a'&&str2[i + 1] <= 'z'))
		{
			s2.push_back(str2.substr(i, 2));
		}
	}

  // s1의 원소를 가지고 s2의 원소와 비교하여 교집합의 개수를 찾아내고 찾은 원소는 지움
	int cnt = 0;
	for (auto iter = s1.begin(); iter != s1.end(); iter++)
	{
		for (auto iter2 = s2.begin(); iter2 != s2.end(); iter2++)
		{
			if (*iter2 == *iter)
			{
				s2.erase(iter2);
				cnt++;
				break;
			}
		}
	}
  // 둘다 0이면 조건에 따라 65536이됨
	if (cnt == 0 && (s1.size() + s2.size() == 0))
	{
		answer = 65536;
	}
	else
	{
		answer = (double)cnt / (s1.size() + s2.size()) * 65536;
	}
	return answer;
}
