// 1206. View
// 2019.07.05
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	for (int test_case = 1; test_case <= 10; test_case++)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		int cnt = 0;
		for (int i = 2; i < n - 2; i++)
		{
			int min = 255;
			// 앞뒤 2칸 조사해서 조망권이 있는지 확인
			for (int j = -2; j < 3; j++)
			{
				if (v[i] <= v[i + j] && j != 0)
				{
					break;
				}
				else if (v[i] > v[i + j])
				{
					min = min < v[i] - v[i + j] ? min : v[i] - v[i + j];
				}
				if (j == 2)
				{
					cnt += min;
				}
			}
		}
		cout << "#" << test_case << " " << cnt << endl;
	}
	return 0;
}
