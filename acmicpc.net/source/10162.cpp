// 10162. 전자레인지
// 2019.09.06
// 그리디 알고리즘
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int a = 0;
	int b = 0;
	int c = 0;
	// 5분 버튼
	while (t - 300 >= 0)
	{
		t -= 300;
		a++;
	}
	// 1분 버튼
	while (t - 60 >= 0)
	{
		t -= 60;
		b++;
	}
	// 10초 버튼
	while (t - 10 >= 0)
	{
		t -= 10;
		c++;
	}

	if (t == 0)
	{
		cout << a << " " << b << " " << c << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	return 0;
}
