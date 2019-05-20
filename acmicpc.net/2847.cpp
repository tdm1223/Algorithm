// 2847. 게임을 만든 동준이
// 2019.05.20
// 구현
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	int ans = 0; // 출력할 답을 저장하는 변수
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = n - 1; i > 0; i--)
	{
		while (1)
		{
			if (v[i - 1] >= v[i])
			{
				v[i - 1]--;
				ans++;
			}
			else
			{
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
