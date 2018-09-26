// 1075. 나누기
#include<iostream>

using namespace std;

int main(void)
{
	int n, f;
	cin >> n >> f;
	//뒤의 두자리 수를 지워줌
	n /= 100;
	n *= 100;

	while (1)
	{
		if (n%f == 0)
		{
			break;
		}
		n++;
	}

	n %= 100;
	if (n < 10)
		cout << "0" << n << endl;
	else
		cout << n << endl;
	return 0;
}
