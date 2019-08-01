// 6782. 현주가 좋아하는 제곱근 놀이
// 2019.08.01
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++)
	{
		long long n;
		cin >> n;
		long long result = 0;
		// 2를 만들어야한다.
		while (n != 2)
		{
			// 1이면 1증가하고 종료
			if (n == 1)
			{
				result++;
				break;
			}
			long long temp = 0 + pow((long long)sqrt(n), 2) - n;

			// 제곱근
			if (temp == 0)
			{
				n = (long long)sqrt(n);
				result++;
			}
			else
			{
				result += pow((long long)sqrt(n) + 1, 2) - n;
				result ++;
				n = sqrt(n) + 1;
			}
		}
		cout << "#" << test_case << " " << result << endl;
	}
	return 0;
}
