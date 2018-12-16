// 5565. 영수증
// 2018.12.16
#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	// 총 가격에서 9개의 가격을 뺀게 정답
	for (int i = 0; i < 9; i++)
	{
		cin >> b;
		a -= b;
	}

	cout << a << endl;
	return 0;
}
