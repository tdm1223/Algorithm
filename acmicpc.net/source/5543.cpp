// 5543. 상근날드
// 2019.05.21
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	// a,b,c는 버거 , d,e는 음료
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	// 최솟값 찾기
	cout << min(a, min(b, c)) + min(d, e) - 50 << endl;
	return 0;
}
