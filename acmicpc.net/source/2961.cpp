// 2961. 도영이가 만든 맛있는 음식
// 2019.09.15
// 재귀 호출, 브루트포스
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int visit[11];
int arr[11];
int n;
int ans = 1000000001; // 이론상 최댓값 + 1
vector<pair<int, int>> v;
void go(int cnt, int max,int start)
{
	// 차이의 최솟값 구하기
	if (cnt == max)
	{
		int sour = 1; // 신맛
		int bitter = 0; // 쓴맛
		for (int i = 0; i < max; i++)
		{
			sour *= v[arr[i]].first;
			bitter += v[arr[i]].second;
			ans = min(ans, abs(sour - bitter));
		}
		return;
	}

	// 선택
	for (int i = start; i < n; i++)
	{
		arr[cnt] = i;
		go(cnt + 1, max, i + 1);
	}
}
int main()
{
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	// nC1, nC2, ..., nCn 고르기
	for (int i = 1; i <= n; i++)
	{
		go(0, i,0);
	}
	cout << ans << endl;
	return 0;
}
