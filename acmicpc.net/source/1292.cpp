// 1292. 쉽게 푸는 문제
// 2019.09.22
// 구현
#include<iostream>

using namespace std;

int arr[1001];
int main()
{
	int num = 1;
	int cnt = 0;
	// 1000까지 미리 넣어둠
	for (int i = 1; i <= 1000; i++)
	{
		arr[i] = num;
		cnt++;
		if (cnt == num)
		{
			cnt = 0;
			num++;
		}
	}
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
	return 0;
}
