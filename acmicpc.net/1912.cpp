// 1912. 연속합
#include <iostream>

using namespace std;

int a[100001];
int d[100001]; // d[i] : i번째 수까지의 연속합의 최댓값
int main()
{
	int n;

	int max;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	d[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		//이전까지의 합과 이전까지의 합 + 현재 값 중 최댓값
		d[i] = d[i - 1] + a[i] > a[i] ? d[i - 1] + a[i] : a[i];
	}

	//d[0]을 포합한 모든 d[i] 값중 최댓값을 출력
	max = d[0];
	for (int i = 1; i < n; i++)
		if (d[i] > max)
			max = d[i];

	cout << max << endl;
}
