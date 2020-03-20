// https://www.hackerrank.com/challenges/breaking-best-and-worst-records
vector<int> breakingRecords(vector<int> scores)
{
	int min, max;
	int minCount = 0;
	int maxCount = 0;
	vector<int> ans;
	min = max = scores[0];
	for (int i = 1; i < scores.size(); i++)
	{
		if (scores[i] > max)
		{
			maxCount++;
			max = scores[i];
		}
		if (scores[i] < min)
		{
			minCount++;
			min = scores[i];
		}

	}
	ans.push_back(maxCount);
	ans.push_back(minCount);
	return ans;
}
