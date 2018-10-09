// https://www.hackerrank.com/challenges/ctci-ice-cream-parlor
void whatFlavors(vector<int> cost, int money)
{
	map <int, int > m;
	for (int i = 0; i < cost.size(); i++)
	{
		m[cost[i]] = i;
	}
	map<int, int > ::iterator iter;
	for (int i = 0; i < cost.size(); i++)
	{
		iter = m.find(money - cost[i]);
		if (iter != m.end())
		{
			if (m[money - cost[i]] != i)
			{
				cout << i + 1 << " " << iter->second + 1 << endl;
				break;
			}
		}
	}
}
