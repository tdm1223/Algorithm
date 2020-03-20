//https://www.hackerrank.com/challenges/greedy-florist
int getMinimumCost(int k, vector<int> v)
{
	//내림차순 정렬
	sort(v.begin(), v.end(), greater<int>());

	int answer = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		answer += ((i / k) + 1) * v[i];
	}

	return answer;
}
