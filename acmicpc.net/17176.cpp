// 17176. 암호해독기
// 2019.08.03
// 문자열 처리
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	char ans = 'y';
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	vector<int> v2(n);
	string s;
	cin.ignore(256, '\n');
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		// 공백
		if (s[i] == ' ')
		{
			v2[i] = 0;
		}
		// 대문자
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			v2[i] = s[i] - 'A' + 1;
		}
		// 소문자
		else if(s[i]>='a' && s[i]<='z')
		{
			v2[i] = s[i] - 'a' + 27;
		}
	}
	sort(v2.begin(), v2.end());
	for (int i = 0; i < n; i++)
	{
		if (v[i] != v2[i])
		{
			ans = 'n';
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
