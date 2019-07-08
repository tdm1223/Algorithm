// 4796. 의석이의 우뚝 선 산
// 2019.07.08
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		int ans = 0;
		for (int i = 1; i < n - 1; i++)
		{
			if (v[i - 1] < v[i] && v[i] > v[i + 1])
			{
				int left = i - 1;
				int right = i + 1;
				int leftCnt = 1;
				int rightCnt = 1;

				while (left > 0)
				{
					left--;
					if (v[left + 1] > v[left])
					{
						leftCnt++;
					}
					else
					{
						break;
					}
				}

				while (right < n - 1)
				{
					right++;
					if (v[right - 1] > v[right])
					{
						rightCnt++;
					}
					else
					{
						break;
					}
				}
				// 우뚝 설 수 있는 구간의 개수 더함
				// 왼쪽으로 작은 수 * 오른쪽으로 작은 수 가지의 경우의 수가 존재하므로 곱을 더한다.
				ans += leftCnt * rightCnt;
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
