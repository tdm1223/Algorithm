// 15654. N과 M (5)
// 2019.05.22
// N과 M
// https://tdm1223.tistory.com/110
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
bool visit[10];
int arr[10];
vector<int> v;

void go(int count)
{
	// m개만큼 다 뽑았을 때
	if (count == m)
	{
		for (int i = 0; i < m; i++)
		{
			// cout 사용시 시간초과
			printf("%d ", v[arr[i]]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		// 중복을 피하기 위해 visit배열 체크
		if (!visit[i])
		{
			visit[i] = true;
			arr[count] = i;
			go(count + 1);
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
	go(0);
	return 0;
}
