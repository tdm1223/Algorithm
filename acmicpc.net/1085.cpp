// 1085. 직사각형에서 탈출
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int min(int x, int y)
{
	return x > y ? y : x;
}
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	cout << min(min(x, y),min(abs(w-x),abs(h-y)));
	return 0;
}
