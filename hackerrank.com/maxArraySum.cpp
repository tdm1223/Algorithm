//https://www.hackerrank.com/challenges/max-array-sum
int d[100001]; //d[i] : i번쨰까지의 수를 더해 만든 합중 최댓값
int maxSubsetSum(vector<int> arr)
{
	d[0] = arr[0];
	d[1] = max(arr[0], arr[1]);
	for (int i = 2; i <= arr.size(); i++)
	{
		d[i] = max(max(d[i - 1], d[i - 2] + arr[i]), arr[i]);
	}
	return d[arr.size() - 1];
}
