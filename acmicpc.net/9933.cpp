// 9933. 민균이의 비밀번호
#include <iostream>
#include<vector>
#include <string>
#include<algorithm>
using namespace std;

string rev(string &input)
{
	string tmp(input);
	reverse(tmp.begin(), tmp.end());
	return tmp;
}
int main()
{
	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];
	string ans;
	for (int i = 0; i < v.size(); i++)
	{
		string tmp = rev(v[i]);

		for (int j = 0; j < v.size(); j++)
		{
			if (tmp==v[j])
			{
				ans = v[i];
				break;
			}
		}
	}
	cout << ans.size() << " " << ans[ans.size() / 2] << endl;
	return 0;
}