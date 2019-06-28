// 더 맵게
// 2019.06.28
#include<vector>
#include<queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
	// 오름차순 우선순위큐 선언
	priority_queue<int, vector<int>, greater<int> > q;
	for (int i = 0; i<scoville.size(); i++)
	{
		q.push(scoville[i]);
	}
	int answer = 0;
	while (1)
	{
		// 처음값이 K보다 크면 모든 값이 K보다 크기에 조건을 만족
		if (q.top() >= K)
		{
			break;
		}
		int first = q.top();
		q.pop();
		if (q.empty() && q.top() < K)
		{
			return -1;
		}
		int second = q.top();
		q.pop();
		q.push(first + (second * 2));
		answer++;
	}

	return answer;
}
