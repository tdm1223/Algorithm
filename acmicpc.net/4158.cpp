// 4158. CD
// 2019.09.18
// 구현
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (1)
	{
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)
		{
			break;
		}

		vector<int> a(n);
		vector<int> b(m);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}

		int ans = 0;
		int idx1 = 0;
		int idx2 = 0;
		while (1)
		{
			// 둘 중 하나가 인덱스를 벗어나면 종료
			if (idx1 >= n || idx2 >= m)
			{
				break;
			}
			// 두 값이 같다면 동시에 가지고 있는 CD
			if (a[idx1] == b[idx2])
			{
				ans++;
				idx1++;
				idx2++;
			}
			// 상근이가 가지고 있는것이 더 크다면 선영이가 가지고 있는 것의 인덱스 증가
			else if (a[idx1] > b[idx2])
			{
				idx2++;
			}
			// 선영이가 가지고 있는것이 더 크다면 상근이가 가지고 있는 것의 인덱스 증가
			else if (a[idx1] < b[idx2])
			{
				idx1++;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
