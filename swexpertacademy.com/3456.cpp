// 3456. 직사각형 길이 찾기
// 2019.07.01
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a, b, c;
		cin >> a >> b >> c;
		// 3개를 Exclusive-or연산하면 답이 나온다.(짝수개로 나온 수가 지워진다)
		cout << "#" << test_case << " " << (a^b^c) << endl;
	}
	return 0;
}
