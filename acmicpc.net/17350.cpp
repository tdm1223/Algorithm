// 17350. 2루수 이름이 뭐야
// 2019.08.04
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	string ans = "뭐야?";
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "anj")
		{
			ans = "뭐야;";
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
