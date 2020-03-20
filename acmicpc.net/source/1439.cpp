// 1439. 뒤집기
// 2019.05.18
// 그리디 알고리즘
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int area[2];
int main()
{
	string s;
	cin >> s;

	for (int i = 1; i < s.size(); i++)
	{
		// 앞의 수와 다르다면 area[앞의수]의 값을 1 더해줌
		if (s[i] != s[i - 1])
		{
			// 앞이 0이라면
			if (s[i - 1] == '0')
			{
				area[0]++;
			}
			// 앞이 1이라면
			else
			{
				area[1]++;
			}
		}
		// 마지막은 해당 수의 area를 1 더해줌
		if (i == s.size() - 1)
		{
			area[s[i] - '0']++;
		}
	}
	// 두 area중 작은것을 출력
	cout << min(area[0], area[1]) << endl;
	return 0;
}
