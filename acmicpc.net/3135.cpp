// 3135. 라디오
// 2019.09.04
// 구현
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	vector<int> star(n); // 즐겨찾기 목록
	for (int i = 0; i < n; i++)
	{
		cin >> star[i];
	}

	int ans = abs(a - b);
	// abs(즐겨찾기-b)와 ans중 최솟값이 정답
	for (int i = 0; i < n; i++)
	{
		ans = min(ans, abs(b - star[i]) + 1);
	}
	cout << ans << endl;
	return 0;
}
