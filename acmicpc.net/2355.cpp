#include <iostream>

using namespace std;


int main()
{
	long long a, b;
	cin >> a >> b;
	//1부터 큰수까지의 합 - 1부터 (작은수-1)까지의 합
	if (a >= b)
	{
		cout << a * (a + 1) / 2 - b * (b - 1) / 2 << endl;
	}
	else
	{
		cout << b * (b + 1) / 2 - a * (a - 1) / 2 << endl;
	}

}

