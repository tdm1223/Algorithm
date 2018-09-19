// 2847. 게임을 만든 동준이
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = n - 1; i > 0; i--)
	{
		while (1)
		{
			if (v[i - 1] >= v[i])
			{
				v[i - 1]--;
				cnt++;
			}
			else break;
		}
	}
	cout << cnt << endl;
}
