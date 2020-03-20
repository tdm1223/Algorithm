// 1021. 회전하는 큐
// 2019.05.14
// 시뮬레이션
#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	deque<int> dq(n);
	for (int i = 0; i < n; i++)
	{
		dq[i] = i + 1;
	}
	vector<int> v(m);
	for (int i = 0; i < m; i++)
	{
		cin >> v[i];
	}

	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		int idx = 0;
		// v[i]가 dq에 몇번째에 있는지 찾기
		for (int j = 0; j < dq.size(); j++)
		{
			if (dq[j] == v[i])
			{
				idx = j;
				break;
			}
		}

		// 앞으로 이동이 더 가깝다면 이동 후 제거
		if (dq.size() - idx > idx)
		{
			for (int k = 0; k < idx; k++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
				ans++;
			}
			dq.pop_front();
		}
		// 뒤로 이동이 더 가깝다면 이동 후 제거
		else
		{
 			for (int k = 0; k < dq.size()-idx; k++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
				ans++;
			}
			dq.pop_front();
		}
	}

	cout << ans << endl;
	return 0;
}
