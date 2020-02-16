// 18429. 근손실
// 2020.02.16
// 브루트포스
#include<iostream>
#include<vector>

using namespace std;

vector<int> weights;
int n, k;

int visit[9];
int ans;
// 전체 순환
void go(int cnt, int w)
{
	// 500보다 작으면 바로 종료
	if (w < 500)
	{
		return;
	}
	// 모두 다 돌았다면 ans+1
	if (cnt == n)
	{
		ans++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (!visit[i])
		{
			visit[i] = 1;
			go(cnt + 1, w + weights[i]);
			visit[i] = 0;
		}
	}
}

int main()
{
	cin >> n >> k;
	weights.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
		// 미리 k만큼 빼준다.
		weights[i] -= k;
	}

	go(0, 500);

	cout << ans << endl;
	return 0;
}
