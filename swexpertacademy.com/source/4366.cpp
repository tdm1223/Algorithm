// 4366. 정식이의 은행업무
// 2019.07.08
#include<iostream>
#include<string>

using namespace std;

long long ans;
int main()
{
	int t;
	cin >> t;
	for (int testCase = 1; testCase <= t; testCase++)
	{
		string a;
		string b;
		cin >> a >> b;
		ans = 0;
		long long aa = 0;
		int cnt = 1;
		// 2진수
		for (int i = a.size() - 1; i >= 0; i--)
		{
			if (a[i] == '1')
			{
				aa += cnt;
			}
			cnt *= 2;
		}
		long long bb = 0;
		// 3진수
		cnt = 1;
		for (int i = b.size() - 1; i >= 0; i--)
		{
			if (b[i] == '1')
			{
				bb += cnt;
			}
			else if (b[i] == '2')
			{
				bb += cnt * 2;
			}
			cnt *= 3;
		}

		int flag = 0;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			if (flag)
			{
				break;
			}
			long long tmpA = aa;
			int k = 1 << (a.size() - i - 1);
			if (a[i] == '1')
			{
				tmpA -= k;
			}
			else
			{
				tmpA += k;
			}
			cnt = 1;
			for (int j = b.size() - 1; j >= 0; j--)
			{
				if (flag)
				{
					break;
				}
				long long tmpB = bb;
				int k = b[j] - '0';
				tmpB -= k * cnt;
				for (int x = 0; x < 3; x++)
				{
					int tmp = tmpB;
					tmp += x * cnt;
					if (tmpA == tmp)
					{
						ans = tmpA;
						flag = true;
						break;
					}
				}
				cnt *= 3;
			}
		}
		cout << "#" << testCase << " " << ans << endl;
	}
	return 0;
}
