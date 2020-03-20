// 3459. 승자 예측하기
// 2019.07.10
#include<iostream>
#include<string>

using namespace std;

long long mul[31];
int main()
{
	int test_case;
	int T;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	mul[0] = 1;
	for (int i = 1; i <= 30; i++)
	{
		mul[i] = mul[i - 1] * 4;
	}
	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long n;
		cin >> n;
		n -= 1;
		// n-1==0 즉 n이 1일땐 Bob의 승리
		if (n == 0)
		{
			cout << "#" << test_case << " Bob\n";
			continue;
		}
		else
		{
			string ans = "";
			int cnt = 1;
			while (1)
			{
				n -= mul[cnt];
				if (n <= 0)
				{
					ans = "Alice";
					break;
				}
				n -= mul[cnt];
				if (n <= 0)
				{
					ans = "Bob";
					break;
				}
				cnt++;
			}
			cout << "#" << test_case << " " << ans << "\n";
		}
	}
	return 0;
}
