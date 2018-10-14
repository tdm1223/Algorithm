// 1065. 한수
// 2018.10.14
#include <iostream>

using namespace std;

int main()
{
	int ans = 0;
	int n;
	cin >> n;
	int a[3];//세 자릿수 계산시 각 자릿수에 해당하는 수를 저장할 배열
	for (int i = 1; i <= n; i++)
	{
		if (i < 100) //두 자릿수 이하는 모두 한수
		{
			ans = i;
		}
		else if (i == 1000)
		{
			break;
		}
		else //100~999
		{
			int k = 0;
			int tmp = i;
			while (tmp > 0)
			{
				a[k++] = tmp % 10;
				tmp /= 10;
			}
			if (a[0] - a[1] == a[1] - a[2]) //등차수열 판별(한수 판별)
			{
				ans++;
			}
		}
	}

	cout << ans << endl;
}
