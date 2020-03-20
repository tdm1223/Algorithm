// 15664. N과 M(10)
// 2019.05.22
// N과 M
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool visit[8];
int arr[8];
int n, m;
vector<int> v;
void go(int cnt, int idx)
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
	for (int i = idx; i < n; i++)
	{
		// cnt번째에 v[i]를 사용하지 않았고
		// 중복을 피하기 위해 visit배열 체크
		if (!check[v[i]] && !visit[i])
		{
			visit[i] = true;
			check[v[i]] = 1;
			arr[cnt] = v[i];
			go(cnt + 1, i);
			visit[i] = false;
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

	go(0, 0);

	return 0;
}
