// 10807. 개수 세기
// 2019.09.07
// 입문용
#include<iostream>
#include<ctime>

using namespace std;

int arr[101];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int v;
	cin >> v;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
