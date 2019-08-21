// 11931. 수 정렬하기 4
// 2019.08.21
// 정렬
#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n, greater<int>());
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}
