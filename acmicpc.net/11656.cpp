// 11656. 접미사 배열
// 2018.10.16
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<string> ans;
	for (int i = 0; i < s.size(); i++)
	{
		ans.push_back(s.substr(i, s.size()));
	}

	sort(ans.begin(), ans.end());

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
