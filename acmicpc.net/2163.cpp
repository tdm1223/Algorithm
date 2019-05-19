// 2163. 초콜릿 자르기
// 2019.05.19
// 다이나믹 프로그래밍, 수학
#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	// 초콜릿의 총 자른 횟수는 m-1 + (n-1) * m 번이고 이것을 간단하게 하면 n*m-1
	cout << n * m - 1 << endl;
	return 0;
}
