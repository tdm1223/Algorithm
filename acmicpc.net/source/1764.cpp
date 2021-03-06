// 1764. 듣보잡
// 2019.05.18
// 문자열 처리, 구현
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> v;
	vector<string> ans;
	int n, m;
	string s;

	cin >> n >> m;

	// 모두 하나의 벡터에 넣고 정렬
	for (int i = 0; i < n + m; i++)
	{
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());

	for (int i = 1; i < n + m; i++)
	{
		// 현재 값이 이전값과 같다면 듣보잡에 해당.
		if (v[i] == v[i - 1])
		{
			ans.push_back(v[i]);
		}
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
