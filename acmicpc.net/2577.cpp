// 2577. 숫자의 개수
#include <iostream>

using namespace std;

int ans[10];
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int result = 1;
	result = a * b * c;

	while (1)
	{
		int res = result % 10;
		ans[res]++;
		result /= 10;
		if (result == 0) break;
	}

	for (int i = 0; i < 10; i++)
		cout << ans[i] << endl;
	return 0;
}
