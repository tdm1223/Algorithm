// 17626. Four Squares
// 2019.10.31
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[50001]; // d[i] : i를 제곱수의 합으로 나타내는 방법의 최소값
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		d[i] = i; //일종의 최댓값. 모두 1+1+... 로 구성하는것
		for (int j = 1; j*j <= i; j++)
		{
			if (d[i] > d[i - j * j] + 1)
			{
				d[i] = d[i - j * j] + 1;
			}
		}
	}

	cout << d[n] << endl;
	return 0;
}
