// 15665. N과 M(11)
// 2019.03.07
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[8];
int n, m;
vector<int> v;
void go(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	int check[10001] = { 0, };
	for (int i = 0; i < n; i++)
	{
		// cnt번째에 v[i]를 사용하지 않았고
		if (!check[v[i]])
		{
			check[v[i]] = 1;
			arr[cnt] = v[i];
			go(cnt + 1);
		}
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
