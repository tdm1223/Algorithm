// 15656. N과 M(7)
// 2019.03.07
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
vector<int> v;
int arr[8];
void go(int cnt)
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

	for (int i = 0; i < n; i++)
	{
		arr[cnt] = i;
		go(cnt + 1);
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
	go(0);

	return 0;
}
