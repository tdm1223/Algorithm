// 5052. 전화번호 목록
// 2018.10.15
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
		{
			cin >> v[i];
		}
		string answer = "YES";
		sort(v.begin(), v.end());

		for (int i = 0; i < v.size()-1; i++)
		{
			// 현재 값이 다음 값의 부분 문자열에 포함된다면 일관성이 없는 목록
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
