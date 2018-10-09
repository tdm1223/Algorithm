//https://www.hackerrank.com/challenges/crush
long arrayManipulation(int n, vector<vector<int>> queries)
{
	vector<int> v(n + 1);
	for (long i = 0; i < queries.size(); i++)
	{
		v[queries[i][0]] += queries[i][2];
		if (queries[i][1] <= n)
		{
			v[queries[i][1] + 1] -= queries[i][2];
		}
	}

	long max = 0;
	long x = 0;
	for (long i = 1; i <= n; i++)
	{
		x += v[i];
		if (max < x)
		{
			max = x;
		}
	}
	return max;
}
