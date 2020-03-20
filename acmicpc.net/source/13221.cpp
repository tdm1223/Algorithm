// 13221. Manhattan
// 2019.08.07
// 수학
#include<iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int n;
	cin >> n;
	pair<int, int> ans;
	int minDist = 987654321;
	for (int i = 0; i < n; i++)
	{
		int x1, y1;
		cin >> x1 >> y1;
		int dist = abs(x - x1) + abs(y - y1);
		if (dist < minDist)
		{
			minDist = dist;
			ans = { x1,y1 };
		}
	}
	cout << ans.first << " " << ans.second << endl;
	return 0;
}
