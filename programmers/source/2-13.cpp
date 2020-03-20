// 기능개발
// 2019.06.28
// 스택
#include<vector>
#include<deque>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
	vector<int> answer;
	deque<int> dq;
	deque<int> speedsDQ;
	for (int i = 0; i < progresses.size(); i++)
	{
		dq.push_back(progresses[i]);
		speedsDQ.push_back(speeds[i]);
	}
	int n = progresses.size();
	while (!dq.empty())
	{
		for (int i = 0; i < dq.size(); i++)
		{
			dq[i] += speedsDQ[i];
		}
		if (dq.front() >= 100)
		{
			int count = 0;
			for (int i = 0; i < dq.size(); i++)
			{
				if (dq[i] < 100 || dq.empty())
				{
					answer.push_back(count);
					break;
				}
				else
				{
					count++;
					if (i == dq.size() - 1)
					{
						answer.push_back(count);
						break;
					}
				}
			}
			for (int i = 0; i < count; i++)
			{
				dq.pop_front();
				speedsDQ.pop_front();
			}
		}
	}
	return answer;
}
