// 1526. 가장 큰 금민수
// 2019.05.18
// 시뮬레이션
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 4; // 가장 작은 금민수를 기본값으로 설정
	for (int i = n; i >= 5; i--) // 가장 큰 금민수 하나만 찾으면 되므로 n부터 1씩 빼면서 확인
	{
		int tmp = i;
		int flag = true;
		while (tmp > 0)
		{
			int a = tmp % 10;
			if (a != 4 && a != 7)
			{
				flag = false;
				break;
			}
			tmp /= 10;
		}
		if (flag)
		{
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
