// 4466. 최대 성적표 만들기
// 2019.06.30
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		// 정렬후 k만큼의 합이 정답이 된다.
		sort(v.begin(), v.end(), greater<int>());
		int sum = 0;
		for (int i = 0; i < k; i++)
		{
			sum += v[i];
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}
