// 17206. 준석이의 수학 숙제
// 2019.08.05
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[80001]; // d[i] : i이하의 3 또는 7의 양의 배수를 모두 더한 값
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	d[9] = 25; // 3 + 6 + 7 + 9 = 25
	for (int i = 10; i <= 80000; i++)
	{
    // 3이나 7로 나누어 떨어지면 값을 더함
		if (i % 3 == 0 || i % 7 == 0)
		{
			d[i] = d[i - 1] + i;
		}
    // 나누어 떨어지지 않으면 이전값 그대로 가져감
		else
		{
			d[i] = d[i - 1];
		}
	}

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		cout << d[k] << "\n";
	}

	return 0;
}
