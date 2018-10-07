// 나누어 떨어지는 숫자 배열
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
	vector<int> answer;
	//순회 하면서 나누어 떨어진다면 벡터에 넣음
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % divisor == 0)
		{
			answer.push_back(arr[i]);
		}
	}
	//나누어 떨어지는게 하나도 없다면 -1을 넣음
	if (answer.size() == 0)
	{
		answer.push_back(-1);
	}
	sort(answer.begin(), answer.end());

	return answer;
}
