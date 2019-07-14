// 3143. 가장 빠른 문자열 타이핑
// 2019.07.14
#include<iostream>
#include<string>

using namespace std;

int cnt;
string ReplaceAll(string &str, const string& from, const string& to)
{
	size_t start_pos = 0; // string처음부터 검사
	while ((start_pos = str.find(from, start_pos)) != string::npos)  //from을 찾을 수 없을 때까지
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // 중복검사를 피하고 from.length() > to.length()인 경우를 위해서
		cnt++;
	}
	return str;
}

int main()
{
	int t;
	cin >> t;

	for (int testCase = 1; testCase <= t; testCase++)
	{
		cnt = 0;
		string a, b;
		cin >> a >> b;
		string tmp = "";
		string res = ReplaceAll(a, b, tmp);

		int ans = res.size() + cnt;

		cout << "#" << testCase << " " << ans << "\n";
	}
	return 0;
}
