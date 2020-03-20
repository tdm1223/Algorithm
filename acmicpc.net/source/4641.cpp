// 4641. Doubles
// 2019.07.14
// 브루트 포스, 입문용
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int cnt;
vector<int> v;
// 2배 확인하는 함수
int calc()
{
	int ans = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] * 2 == v[j])
			{
				ans++;
			}
		}
	}
	return ans;
}
int main()
{
	while (1)
	{
		int k;
		cin >> k;
		// 종료조건
		if (k == -1)
		{
			break;
		}
		if (k == 0)
		{
			cnt = 0;
			int ans = calc();
			cout << ans << "\n";
			v.clear();
		}
		else
		{
			v.push_back(k);
		}
	}
	return 0;
}
