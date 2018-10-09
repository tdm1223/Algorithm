// https://www.hackerrank.com/challenges/migratory-birds
int migratoryBirds(vector<int> arr)
{
	int ans[6] = { 0,0,0,0,0,0 };
	int max = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		ans[arr[i]]++;
	}

	for (int i = 1; i <= 5; i++)
	{
		if (ans[i] > max)
		{
			max = ans[i];
		}
	}
	int result;
	for (int i = 1; i <= 5; i++)
		if (max == ans[i])
		{
			result = i;
			break;
		}
	return result;
}
