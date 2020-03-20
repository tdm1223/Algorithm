// 3750. Digit sum
// 2019.09.17
#include<iostream>
#include<string>

using namespace std;

int ans;
void go(string k)
{
	int sum = 0;
	for (int i = 0; i < k.size(); i++)
	{
		sum += k[i] - '0';
	}
	if (sum < 10)
	{
		ans = sum;
		return;
	}
	else
	{
		string tmp = to_string(sum);
		go(tmp);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string k;
		cin >> k;
		go(k);
		cout << "#" << test_case << " " << ans << "\n";
	}
	return 0;
}
