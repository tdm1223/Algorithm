// 2437. 저울
// 2019.05.20
// 그리디 알고리즘
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	if (v[0] != 1) // 1을 잴수 없을 때
	{
		cout << 1 << endl;
	}
	else
	{
		int sum = 1;
		for (int i = 1; i < n; i++)
		{
			// v[i]가 기존의 누적합(sum + 1) 보다 크다면 표현이 불가능 하므로
			// 기존의 누적합(sum+1) 출력
			if (v[i] > sum + 1)
			{
				break;
			}
			sum += v[i];
		}
		cout << sum + 1 << endl;
	}
	return 0;
}
