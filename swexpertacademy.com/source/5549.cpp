// 5549. 홀수일까 짝수일까
// 2019.06.29
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string s;
		cin >> s;
		// 100자리 이하의 양의 정수이므로 string을 활용하여 계산
		// 마지막만 확인해보면 된다.
		if ((s[s.size() - 1] - '0') % 2 == 1)
		{
			cout << "#" << test_case << " " << "Odd" << endl;
		}
		else
		{
			cout << "#" << test_case << " " << "Even" << endl;
		}
	}
	return 0;
}
