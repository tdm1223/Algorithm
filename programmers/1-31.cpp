// K번째 수
#include <string>
#include <vector>
#include<algorithm>
#include<queue>
#include<functional>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;

	for (int i = 0; i<commands.size(); i++)
	{
		priority_queue<int> q;
        int num=0;
		for (int j = commands[i][0] - 1; j<commands[i][1]; j++)
		{
			q.push(array[j]);
		}
        int size = q.size();
		while (!q.empty())
		{
            num++;
            if(num==(size-commands[i][2]+1))
			    answer.push_back(q.top());
			q.pop();
		}
	}
	return answer;
}
