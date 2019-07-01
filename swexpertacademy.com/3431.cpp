// 3431. 준환이의 운동관리
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
		// L분이상 U분이하의 운동 이번 주에 X분만큼 운동
		int L, U, X;
		int answer = 0;
		cin >> L >> U >> X;
		// 더많은양을 운동
		if (X > U)
		{
			answer = -1;
		}
		// 추가로 몇 분을 더 운동해야 하는지
		else if (L > X)
		{
			answer = L - X;
		}
		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;
}
