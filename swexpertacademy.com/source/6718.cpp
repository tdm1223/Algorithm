// 6718. 희성이의 원근법
// 2019.06.29
#include<iostream>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		// cin,cout사용시 시간초과
		scanf("%d", &n);
		if (n >= 1000000)
		{
			printf("#%d 5\n", test_case);
			continue;
		}
		else  if (n >= 100000)
		{
			printf("#%d 4\n", test_case);
			continue;
		}
		else  if (n >= 10000)
		{
			printf("#%d 3\n", test_case);
			continue;
		}
		else  if (n >= 1000)
		{
			printf("#%d 2\n", test_case);
			continue;
		}
		else  if (n >= 100)
		{
			printf("#%d 1\n", test_case);
			continue;
		}
		else
		{
			printf("#%d 0\n", test_case);
			continue;
		}
	}
	return 0;
}
