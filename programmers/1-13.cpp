//행렬의 덧셈
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	vector<vector<int>> answer;
	answer.resize(arr1.size());
	for (int i = 0; i < arr1.size(); ++i)
	{
		answer[i].resize(arr1[i].size());
		for (int j = 0; j < answer[i].size(); ++j)
		{
			answer[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	return answer;
}
