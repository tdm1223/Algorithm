// 2019.03.02
// 16917. 양념 반 후라이드 반
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;

	long long ans = 0;

	// 1. 반반으로만 사기
	// 2. 갯수에 맞게 후라이드 + 양념사기
	// 3. 일정량까지 반반으로 사고 남는거 사기

	// x와 y중의 작은값과 큰값을 구함
	int maxCount = x > y ? x : y;
	int minCount = x > y ? y : x;
	ans = min(min(c * 2 * maxCount, a * x + b * y), minCount * 2 * c + (y - minCount)*b + (x - minCount)*a);
	cout << ans << endl;
	return 0;
}
