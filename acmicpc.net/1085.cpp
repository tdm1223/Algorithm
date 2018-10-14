// 1085. 직사각형에서 탈출
// 2018.10.14
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	//상,하,좌,우 4가지 경계선까지의 거리 중 최솟값을 반환
	cout << min(min(x, y), min(abs(w - x), abs(h - y))) << endl;
	return 0;
}
