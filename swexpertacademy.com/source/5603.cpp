// 5603. 건초더미
// 2019.07.05
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;
		int avg = 0;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			avg += v[i];
		}
		// 건초더미 평균을 구함
		avg /= n;
		int ans = 0;
		// 평균 이상일 때 평균과의 차이만큼 더해줌
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] < avg)
			{
				ans += avg - v[i];
			}
		}
		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}
