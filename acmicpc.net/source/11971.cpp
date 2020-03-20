// 11971. 속도 위반
// 2019.08.08
// 구현
#include<iostream>

using namespace std;

int road[101]; // 도로의 제한속도
int speed[101]; // 연정이의 스피드
int main()
{
	int n, m;
	cin >> n >> m;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = k+1; j <= k + a; j++)
		{
			road[j] = b;
		}
		k += a;
	}
	k = 0;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = k + 1; j <= k + a; j++)
		{
			speed[j] = b;
		}
		k += a;
	}

	// 현재 위치에서 스피드 - 제한속도의 최댓값을 구함
	int max = 0;
	for (int i = 1; i <= 100; i++)
	{
		max = max > speed[i] - road[i] ? max : speed[i] - road[i];
	}
	cout << max << endl;
	return 0;
}
