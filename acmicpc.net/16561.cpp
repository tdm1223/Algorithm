// 16561. 3의 배수
// 2019.09.01
// 브루트 포스
#include<iostream>

using namespace std;

int n;
int ans;
int main()
{
	cin >> n;
	for (int i = 3; i <= n; i += 3)
	{
		for (int j = 3; j <= n; j += 3)
		{
			// 세번째 수가 0보다 크고 3으로 나누어 떨어지면 개수+1
			if ((n - i - j > 0) && (n - i - j) % 3 == 0)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
