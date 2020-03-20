// 14697. 방 배정하기
// 2019.05.22
// 브루트 포스
#include<iostream>

using namespace std;

int main()
{
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	int ans = 0;
  // 방들에 대해 3중 for문으로 구한다.
	for (int i = 0; i < 135; i++)
	{
		for (int j = 0; j < 135; j++)
		{
			for (int k = 0; k < 135; k++)
			{
				if (a*i + b * j + c * k == n)
				{
					ans = 1;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
