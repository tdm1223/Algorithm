// 1912. 연속합
#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int a[100001];
int d[100001]; // d[i] : i번째 수까지의 연속합의 최댓값
int main()
{
	int n;

	int answer;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	d[1] = a[1];
	for (int i = 2; i <= n; i++)
	{
		//(이전까지의 합 + 현재 값)과 (현재 값) 중 최댓값
		d[i] = max(d[i - 1] + a[i], a[i]);
	}

	//d[1]을 포함한 모든 d[i] 값중 최댓값을 출력
	answer = d[1];
	for (int i = 2; i <= n; i++)
	{
		if (d[i] > answer)
		{
			answer = d[i];
		}
	}

	cout << answer << endl;
	return 0;
}
