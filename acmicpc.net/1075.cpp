// 1075. ³ª´©±â
#include<iostream>
using namespace std;
int main(void)
{
	int n, f;
	cin >> n >> f;
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