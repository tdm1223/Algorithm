// 문자열 압축
// 2019.09.30
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int solution(string s)
{
	int answer = 987654321;
	// 1개단위 ~ 문자열크기/2+1단위까지 반복
	for (int i = 1; i <= s.size() / 2 + 1; i++)
	{
		// 처음~단위까지 비교를 시작할 첫번째 문자열
		string first = s.substr(0, i);
		int cnt = 1;
		int size = 0;
		for (int j = i; j < s.size(); j += i)
		{
			// 현재 비교중인 문자열과 같다면 숫자 증가
			if (first == s.substr(j, i))
			{
				cnt++;
			}
			// 현재 비교중인 문자열과 다르다면 문자열을 바꿔주고 값을 더해준다.
			else
			{
				if (cnt != 1)
				{
					size += to_string(cnt).size();
				}
				size += first.size();
				first = s.substr(j, i);
				cnt = 1;
			}
		}
		// 맨 마지막 처리
		if (cnt != 1)
		{
			size += to_string(cnt).size();
		}
		size += first.size();
		answer = min(answer, size);
	}
	return answer;
}
