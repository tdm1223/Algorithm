// 2875. 대회 or 인턴
// 2019.05.20
// 그리디 알고리즘
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	// 여학생수/2, 남학생수, (여학생수+남학생수-인턴수)/3의 최솟값을 구하면된다.
	int ans = min(min(n / 2, m), (n + m - k) / 3);

	cout << ans << endl;
	return 0;
}
