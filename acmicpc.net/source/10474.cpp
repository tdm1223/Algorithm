// 10474. 분수좋아해?
// 2019.09.06
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int a, b;
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		cout << a / b << " " << a % b << " / " << b << endl;
	}

	return 0;
}
