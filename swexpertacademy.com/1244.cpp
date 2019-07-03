// 1244. 최대 상금
// 2019.07.03
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int ans;
void backtrack(int left, string s, int n, int k)
{
	// n번만큼 교환 완료
	if (k == n)
	{
		int tmp = 0;
		for (int i = 0; i < s.size()-1; i++)
		{
			tmp += s[i] - '0';
			tmp *= 10;
		}
		tmp += s[s.size() - 1] - '0';
		ans = max(ans, tmp);
		return;
	}
	if (left == s.size() - 2)
	{
		swap(s[left],s[left+1]);
		backtrack(left, s, n, k + 1);
		return;
	}
	char find = s[left];
	for (int i = left + 1; i < s.size(); i++)
	{
		if (find < s[i])
		{
			find = s[i];
		}
	}

	if (s[left] == find) // 최댓값이 가장 왼쪽
	{
		backtrack(left + 1, s, n, k);
	}
	else // 최댓값이 다른위치
	{
		for (int i = left + 1; i < s.size(); i++)
		{
			if (find == s[i])
			{
				swap(s[left], s[i]);
				backtrack(left + 1, s, n, k + 1);
				swap(s[left], s[i]); // 다시 원래대로
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++)
	{
		cin >> ans;
		string s = to_string(ans);
		int cnt;
		cin >> cnt;
		backtrack(0, s, cnt, 0);
		cout << "#" << test_case << " " << ans << endl;
	}
	return 0;
}
