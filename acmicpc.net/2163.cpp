// 2163. 초콜릿 자르기
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	//총 자른 횟수는 m-1 + (n-1) * m 번이고 이것을 풀면 n*m-1
	cout << n * m - 1 << endl;

	return 0;

}
