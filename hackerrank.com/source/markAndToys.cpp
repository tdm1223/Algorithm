// https://www.hackerrank.com/challenges/mark-and-toys
int maximumToys(vector<int> prices, int k)
{
	int ans = 0;
	sort(prices.begin(), prices.end());
	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] > k)
		{
			break;
		}
		k -= prices[i];
		ans++;
	}
	return ans;
}
