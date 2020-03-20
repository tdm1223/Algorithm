// 3052. 나머지
// 2019.05.21
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int arr[42];
int main()
{
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		arr[a % 42]++;
	}
	int ans = 0;
	for (int i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
