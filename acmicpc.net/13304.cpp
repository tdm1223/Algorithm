// 13304. 방 배정
// 2019.08.07
// 구현
#include<iostream>

using namespace std;

int arr[5];
// arr[0] : 1, 2학년 전체
// arr[1] : 3, 4학년 여자, arr[2] : 3, 4학년 남자
// arr[3] : 5, 6학년 여자, arr[4] : 5, 6학년 남자
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int s, y;
		cin >> s >> y;
		if (y == 1 || y == 2)
		{
			arr[0]++;
		}
		else if (y == 3 || y == 4)
		{
			if (s == 0)
			{
				arr[1]++;
			}
			else
			{
				arr[2]++;
			}
		}
		else if (y == 5 || y == 6)
		{
			if (s == 0)
			{
				arr[3]++;
			}
			else
			{
				arr[4]++;
			}
		}
	}

	int ans = 0;
	for (int i = 0; i < 5; i++)
	{
		ans += arr[i] / k;
		if (arr[i] % k != 0)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
