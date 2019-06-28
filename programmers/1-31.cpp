// K번째 수
// 2019.06.28
#include<vector>
#include<queue>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> answer;
	for (int i = 0; i < commands.size(); i++)
	{
		priority_queue<int> q;
		int num = 0;
		// 주어진 범위의 값을 우선순위 큐에 넣음
		for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
		{
			q.push(array[j]);
		}
		int size = q.size();
		// 큐에서 꺼냄(자동 정렬)
		while (!q.empty())
		{
			num++;
			if (num == (size - commands[i][2] + 1))
			{
				answer.push_back(q.top());
			}
			q.pop();
		}
	}
	return answer;
}
