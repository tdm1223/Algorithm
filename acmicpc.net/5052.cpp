// 5052. 전화번호 목록
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		vector<string> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		string answer = "YES";
		sort(v.begin(), v.end());

		for (int i = 0; i < v.size()-1; i++)
		{
			if (v[i] == v[i + 1].substr(0, v[i].size()))
			{
				answer = "NO";
				break;
			}
		}
		cout << answer << endl;
	}
	return 0;
}
