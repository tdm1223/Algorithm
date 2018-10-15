// 2839. 설탕 배달
// 2018.10.15
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	int count1 = 0;
	int count2 = 0;

	while (1)//5로 나누어 떨어질때까지 3씩 뺀다.
	{
		if (n % 5 == 0)//5로 나누어 떨어지면
		{
			count2 = n / 5;
			ans = count1 + count2;
			break;
		}

		if (n < 0)//n킬로 그램을 만들 수 없는 경우
		{
			ans = -1;
			break;
		}

		n -= 3;
		count1++;
	}

	cout << ans << endl;
	return 0;
}
