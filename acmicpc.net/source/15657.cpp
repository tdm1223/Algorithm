// 15657. N과 M(8)
// 2019.05.22
// N과 M
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
vector<int> v;
int arr[8];
void go(int cnt, int idx)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			printf("%d ", v[arr[i]]);
		}
		printf("\n");
		return;
	}
	for (int i = idx; i < n; i++)
	{
		arr[cnt] = i;
		go(cnt + 1, i);
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	go(0, 0);
	return 0;
}
