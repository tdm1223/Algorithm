// 1057. 토너먼트
#include <iostream>
using namespace std;

int main()
{
	int n;
	int a, b;
	int count = 0;

	cin >> n >> a >> b;

	if (n < b || n < a)
	{
		count = -1;
	}
	else
	{
		while (b != a)
		{
			b = (b + 1) / 2;
			a = (a + 1) / 2;
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
