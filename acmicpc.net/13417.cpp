// 13417. 카드 문자열
// 2019.05.22
// 구현
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<char> v(n);

		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		string ans = "";
		ans += v[0];
		// v[1]부터 끝까지 비교하면서 진행
		for (int i = 1; i < n; i++)
		{
			// 문자열의 가장 앞문자와 같거나 앞문자보다 사전순으로 빠른 문자라면 앞에 추가
			if (v[i] <= ans[0])
			{
				ans = v[i] + ans;
			}
			// 아니라면 뒤에 추가
			else
			{
				ans = ans + v[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
