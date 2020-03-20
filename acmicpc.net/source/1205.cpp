// 1205. 등수 구하기
// 2019.07.20
// 정렬
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, score, p;
	cin >> n >> score >> p;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int ans = 1;
	// 꽉찬 상태에서 가장 낮은 점수와 같거나 작으면 -1 반환
	if (n == p && v[n - 1] >= score)
	{
		ans = -1;
	}
	// 이외의경우 값이 큰 수의 개수를 카운트
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (v[i] > score)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
