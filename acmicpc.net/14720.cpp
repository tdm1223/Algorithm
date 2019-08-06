// 14720. 우유 축제
// 2019.08.06
// 구현
#include<iostream>

using namespace std;

int arr[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == cnt)
		{
			ans++;
			cnt = (cnt + 1) % 3;
		}
	}
	cout << ans << endl;
	return 0;
}
