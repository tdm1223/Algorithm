// 1297. TV 크기
// 2019.05.14
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int dia, w, h;
	cin >> dia >> w >> h;
  // 피타고라스
	float ratio = sqrt(w*w+h*h);
	cout << floor(w * dia / ratio) << " " << floor(h * dia / ratio) << endl;
	return 0;
}
