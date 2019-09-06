// 9659. 돌 게임 5
// 2019.09.06
// 구현, 알고리즘 게임
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	// 둘이 최선으로 게임을 했을 때 홀수면 상근, 짝수면 창영이가 이긴다.
	if ((s[s.size() - 1] - '0') % 2 == 1)
	{
		cout << "SK" << endl;
	}
	else
	{
		cout << "CY" << endl;
	}
	return 0;
}
