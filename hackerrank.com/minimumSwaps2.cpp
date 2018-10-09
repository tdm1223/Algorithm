//https://www.hackerrank.com/challenges/minimum-swaps-2
int minimumSwaps(vector<int> arr)
{
	int count = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != i + 1 && arr[i] <= arr.size())
		{
			swap(arr[i], arr[arr[i] - 1]);
			count++;
			i--;
		}
	}
	return count;
}
