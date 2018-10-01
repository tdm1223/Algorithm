//2355. 시그마
#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	//1부터 큰수 까지의 합과 1부터 작은수 -1 까지의 합을 뺀다.
	//이렇게 하면 작은수 ~ 큰수 까지의 합을 구할 수 있다.
	if (a >= b)
	{
		cout << a * (a + 1) / 2 - b * (b - 1) / 2 << endl;
	}
	else
	{
		cout << b * (b + 1) / 2 - a * (a - 1) / 2 << endl;
	}

}
