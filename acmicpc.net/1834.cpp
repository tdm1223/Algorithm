// 1834. 나머지와 몫이 같은 수
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	long long sum = 0;
	for (long long i = 1; i < n; i++)
	{
		sum += n * i + i;
	}

	cout << sum << endl;
	return 0;
}
