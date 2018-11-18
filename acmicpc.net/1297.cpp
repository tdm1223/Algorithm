// 1297. TV 크기
// 분류 : 수학
// 2018.11.18
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int dia, w, h;
	cin >> dia >> w >> h;
  //피타고라스
	float ratio = sqrt(w*w+h*h);
	cout << floor(w * dia / ratio) << " " << floor(h * dia / ratio) << endl;
	return 0;
}
