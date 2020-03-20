// 1289. 원재의 메모리 복구하기
// 2019.07.03
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int answer = 0;
		string s;
		cin >> s;
		// 초기화 상태인 모든 bit가 0인 상태로 만드려면 우선 1의 개수만큼 더한다.
		if (s[0] - '0' == 1)
		{
			answer++;
		}

		// 앞과 뒤가 다르다면 고치는 과정이 한번 추가된다.
		for (int j = 1; j < s.size(); j++)
		{
			if (s[j - 1] == s[j])
			{
				continue;
			}
			else
			{
				answer++;
			}
		}
		cout << "#" << i << " " << answer << endl;
	}
	return 0;
}
