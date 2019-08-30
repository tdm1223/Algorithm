// 체육복
// 2019.08.30
#include<string>
#include<vector>
#include<iostream>

using namespace std;

int arr[31];
int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		arr[i] = 1; // 모두 가지고있는것으로 초기화
	}
	for (int i = 0; i < lost.size(); i++)
	{
		arr[lost[i]] = 0; // 잃어버린 학생 0으로
		for (int j = 0; j < reserve.size(); j++)
		{
			if (lost[i] == reserve[j]) // 여분이 있는데 잃어버림
			{
				reserve[j] = 0; // 여분 0으로
				arr[lost[i]] = 1; // 가지고있는것으로 바꿈
			}
		}
	}

	for (int i = 0; i < reserve.size(); i++)
	{
		if (reserve[i] == 0)
		{
			continue;
		}
		else
		{
			if (arr[reserve[i] - 1] == 0)
			{
				arr[reserve[i] - 1] = 1;
				continue;
			}
			if (arr[reserve[i] + 1] == 0)
			{
				arr[reserve[i] + 1] = 1;
				continue;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 1)
		{
			answer++;
		}
	}
	return answer;
}
