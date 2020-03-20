// 실패율
// 2019.08.29
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

float stage[501]; // stage[i] : i번 스테이지에 도달한 플레이어의 수
float fail[501]; // fail[i] : i번 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수

bool compare(pair<int, float>& a, pair<int, float>& b)
{
	// 실패율이 같다면 작은 번호의 스테이지가 먼저 오도록 한다.
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	// 실패율이 높은 스테이지부터 내림차순으로 정렬한다.
	return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages)
{
	vector<int> answer;
	for (int i = 0; i < stages.size(); i++)
	{
		for (int j = 0; j <= stages[i]; j++)
		{
			stage[j]++;
		}
		fail[stages[i]]++;
	}

	// {스테이지번호, 실패율}로 구성된 pair가 담긴 배열
	vector<pair<int, float>> vf(N);
	// 실패율 저장
	for (int i = 0; i < N; i++)
	{
		vf[i].first = i + 1;
		// 도달한 사람이 없으면 실패율 0
		if (stage[i + 1] == 0)
		{
			vf[i].second = 0;
		}
		else
		{
			vf[i].second = float(fail[i + 1]) / stage[i + 1];
		}
	}
	// 조건에 맞게 정렬
	sort(vf.begin(), vf.end(), compare);

	// 순서대로 스테이지 번호만 answer에 저장
	for (int i = 0; i < N; i++)
	{
		answer.push_back(vf[i].first);
	}
	return answer;
}
