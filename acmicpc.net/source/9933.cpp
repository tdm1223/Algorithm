// 9933. 민균이의 비밀번호
// 2019.05.22
// 문자열 처리
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
// 문자열 거꾸로
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
	{
		cin >> v[i];
	}

	string ans;
	// 모든 경우의 수에 대하여 비교. 답은 유일한 경우밖에 없다.
	for (int i = 0; i < v.size(); i++)
	{
		string tmp = rev(v[i]);
		for (int j = 0; j < v.size(); j++)
		{
			if (tmp == v[j])
			{
				ans = v[i];
				break;
			}
		}
	}
	// 결과 출력
	cout << ans.size() << " " << ans[ans.size() / 2] << endl;
	return 0;
}
