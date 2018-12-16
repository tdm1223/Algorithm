// 5532. 방학 숙제
// 분류 : 시뮬레이션, 구현
// 2018.12.16
#include<iostream>

using namespace std;

int main()
{
	// l : 총 방학 일 수
	// a : 풀어야 하는 국어 페이지
	// b : 풀어야 하는 수학 페이지
	// c : 하루 최대 국어
	// d : 하루 최대 수학
	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;

	int day = 0;

	while (a > 0 || b > 0)
	{
		a -= c;
		b -= d;
		day++;
	}

	int ans;
	ans = l - day;
	cout << ans << endl;
	return 0;
}
