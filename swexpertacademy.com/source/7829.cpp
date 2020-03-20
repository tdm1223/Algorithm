// 7829. 보물왕 태혁
// 2019.07.06
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
		int p;
		cin >> p;
		vector<int> a;
		for (int i = 0; i < p; i++)
		{
			int k;
			cin >> k;
			a.push_back(k);
		}
		// 입력받은 약수들 정렬
		sort(a.begin(), a.end());
		// 약수가 1개면 제곱수
		if (a.size() == 1)
		{
			cout << "#" << test_case << " " << a[0] * a[0] << "\n";
		}
		// 아니면 가장 작은 값과 가장 큰 값을 곱함
		else
		{
			cout << "#" << test_case << " " << a[0] * a[a.size() - 1] << "\n";
		}
	}
	return 0;
}
