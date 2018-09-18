//2355. 시그마
#include <iostream>

using namespace std;


int main()
{
	long long a, b;
	cin >> a >> b;
	if (a >= b)
	{
		cout << a * (a + 1) / 2 - b * (b - 1) / 2 << endl;
	}
	else
	{
		cout << b * (b + 1) / 2 - a * (a - 1) / 2 << endl;
	}

}
