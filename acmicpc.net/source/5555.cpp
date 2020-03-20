// 5555. 반지
// 2019.08.10
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string ring;
	cin >> ring;

	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		string tmp = s + s;
		if (tmp.find(ring) != string::npos)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
