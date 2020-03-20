// 2872. 우리집엔 도서관이 있어
// 2020.01.10
// 이분탐색, 구현
#include<iostream>

using namespace std;

int book[300001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> book[i];
	}

	int current = n;
	int ans = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (book[i] == current)
		{
			current--;
		}
		else
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
