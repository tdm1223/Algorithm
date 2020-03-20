// 구명보트
// 2019.06.28
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
	int answer = 0;
	// 오름차순 정렬 후 탐욕법으로 풀이
	sort(people.begin(), people.end(), greater<int>());
	int size = people.size();
	for (int i = 0; i < size; i++)
	{
		if (people[i] + people[size - 1] <= limit)
		{
			size--;
			answer++;
		}
		else
		{
			answer++;
		}
	}
	return answer;
}
