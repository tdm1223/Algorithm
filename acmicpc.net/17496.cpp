// 17496. 스타후르츠
// 2019.10.03
// 수학
#include<iostream>

using namespace std;

int main()
{
	int n, t, c, p;
	cin >> n >> t >> c >> p;

	int ans = (n - 1) / t; // 1일에 심으면 1+t일에 수확 가능하므로 (n-1)/t하면 총 몇번 심을 수 있나 계산 가능
	ans *= c * p; // 심는 횟수 * 칸의 수 * 가격이 정답
	cout << ans << endl;
	return 0;
}
