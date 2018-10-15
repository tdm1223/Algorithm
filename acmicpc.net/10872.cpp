// 10872. 팩토리얼
// 2018.10.15
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	cout << result << endl;
	return 0;
}
