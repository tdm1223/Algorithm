// 1208. Flatten
// 2019.07.05
#include<iostream>
#include<algorithm>

using namespace std;

int a[100];
int main()
{
	for (int test = 1; test <= 10; test++)
	{
		int dump;
		cin >> dump;
		for (int i = 0; i < 100; i++)
		{
			cin >> a[i];
		}
		// dump 횟수만큼 (최고점-1), (최소점+1)을 반복한다.
		while (dump--)
		{
			sort(a, a + 100);
			a[0]++;
			a[99]--;
		}
		sort(a, a + 100);
		cout << "#" << test << " " << a[99] - a[0] << endl;
	}
	return 0;
}
