#include <iostream>

using namespace std;

int arr[1001];
int main()
{
	int n, k, count = 0, ans = 0;
	cin >> n >> k;
	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j <= n; j += i)
		{
			if (arr[j] == 0) {
				count++;
				arr[j] = 1;
			}
			if (count == k) {
				ans = j;
				break;
			}
		}
		if (count == k)break;
	}
	cout << ans << '\n';
}