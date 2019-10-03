// 2993. 세 부분
// 2019.10.03
// 반복문, 입문용
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string ans = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"; // 이론상 가장 마지막 string으로 초기화
string& change(string& s)
{
	for (int i = 0; i < s.size() / 2; i++)
	{

		swap(s[i], s[s.size() - i - 1]);
	}
	return s;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	for (int i = 1; i <= s.size() - 2; i++)
	{
		for (int j = 1; j <= s.size() - 1 - i; j++)
		{
			string first = s.substr(0, i);
			string second = s.substr(i, j);
			string third = s.substr(i + j, s.size() - i - j);
			// 세 부분으로 나눈걸 위치를 바꾸고 합침
			string tmp = change(first) + change(second) + change(third);
			// 사전순으로 앞서는 단어를 ans에 저장
			ans = min(ans, tmp);
		}
	}
	cout << ans << endl;
	return 0;
}
