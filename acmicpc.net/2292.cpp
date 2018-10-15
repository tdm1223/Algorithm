// 2292. 벌집
// 2018.10.15
#include<iostream>

using namespace std;

int main()
{
	long long n;
	long long count = 1;
	long long max = 1;
	long long k=1;
	cin >> n;

	// 1,6,12,18 . . . 6의 배수로 만큼 둘러 쌓여지게 된다.
	while (max<n)
	{
		k = 6 * (count++);
		max += k;
	}

	cout << count << endl;
	return 0;
}
