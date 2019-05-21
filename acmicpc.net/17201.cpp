// 17201. 자석 체인
// 2019.05.21
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
  // 맨 처음것을 기준으로 +2한것이 모두 같으면 Yes, 다르면 No
	char firstDir = s[0];
	string ans = "Yes";
	for (int i = 2; i < 2*n; i += 2)
	{
		if (s[i] != firstDir)
		{
			ans = "No";
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
