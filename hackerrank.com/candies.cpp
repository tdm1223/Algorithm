//https://www.hackerrank.com/challenges/candies
long d[100001];
long candies(int n, vector<int> arr)
{
	d[0] = 1;
	long sum = 0;
	int count = 1;
	//왼쪽 -> 오른쪽
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			count++;
		}
		else if (arr[i] <= arr[i - 1])
		{
			count = 1;
		}
		d[i] = count;
	}

	count = 1;
	//오른쪽 -> 왼쪽
	for (int i = n - 2; i >= 0; i--)
	{
		if (arr[i] > arr[i + 1])
		{
			count++;
		}
		else if (arr[i] <= arr[i + 1])
		{
			count = 1;
		}
		d[i] = (count > d[i] ? count : d[i]);
	}

	for (int i = 0; i < n; i++)
	{
		sum += d[i];
	}

	return sum;
}
