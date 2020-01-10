// binary_gap
// 2020.01.10
#include<vector>

using namespace std;

int solution(int N)
{
	vector<int> v;
	int cnt = 0;
	while (N > 0)
	{
		if (N % 2 == 1)
		{
			v.push_back(cnt);
		}
		N /= 2;
		cnt++;
	}
	int ans = 0;
	if (v.size() == 1)
	{
		return 0;
	}
	for (int i = 1; i < v.size(); i++)
	{
		ans = max(ans, v[i] - v[i - 1] - 1);
	}
	return ans;
}
