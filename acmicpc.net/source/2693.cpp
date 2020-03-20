// 2693. N번째 큰 수
// 2019.08.10
// 정렬
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int arr[10];
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[j];
		}
		sort(arr, arr+10);
		cout << arr[7] << endl;
	}
	return 0;
}
