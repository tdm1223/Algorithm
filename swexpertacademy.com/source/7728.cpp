// 7728. 다양성 측정
// 2019.07.10
#include<iostream>
#include<string>

using namespace std;

int num[10];
int main()
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		fill(num, num + 10, 0);
		string a;
		cin >> a;
		int ans = 0;
		// 숫자 카운트
		for (int i = 0; i < a.size(); i++)
		{
			num[a[i] - '0']++;
		}
		// 1개 이상 나왔으면 다양성 증가
		for (int i = 0; i < 10; i++)
		{
			if (num[i] > 0)
			{
				ans++;
			}
		}
		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}
