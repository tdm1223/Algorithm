// 1120. 문자열
// 2019.05.14
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int count = 0;
	int ans = 987645321;
	for (int i = 0; i <= b.size() - a.size(); i++)
	{
		count = 0;
		// a가 b에 가장 많이 겹칠때가 최소
		for (int j = 0; j < a.size(); j++)
		{
			if (a[j] != b[j + i])
			{
				count++;
			}
		}
		ans = min(ans, count);
	}
	cout << ans << endl;
	return 0;
}
