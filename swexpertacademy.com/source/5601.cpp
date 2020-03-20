// 5601. 쥬스 나누기
// 2019.07.05
#include<iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;
		// 문제에서 주어진대로 n으로 나눈것처럼 표시하여 출력한다.
		// 실제로는 굳이 나눌 필요는 없다.
		cout << "#" << test_case << " ";
		for (int i = 0; i < n; i++)
		{
			cout << "1/" << n << " ";
		}
		cout << endl;
	}
	return 0;
}
