// 3142. 영준이와 신비한 뿔의 숲
// 2019.07.02
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, m;
		cin >> n >> m;
		// 연립방정식 풀이 적용
		// 2twin + unicorn = n
		//  twin + unicorn = m이므로 twin = n-m이고 unicorn은 m-twin이다.
		int twin = n - m;
		int unicorn = m - twin;
		cout << "#" << test_case << " " << unicorn << " " << twin << endl;
	}
	return 0;
}
