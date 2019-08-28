// 2725. 보이는 점의 개수
// 2019.08.28
// 수학
#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}

int d[1001];
int main()
{
	d[1] = 2;
	// 두 점 x,y의 최대공약수가 1일때 보이는 좌표이다.
	for (int i = 2; i <= 1000; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (gcd(i, j) == 1)
			{
				cnt++;
			}
		}
		d[i] = d[i - 1] + cnt;
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		// (1,2)가 보이면 (2,1)도 보이므로 2배를 하고
		// 가운데줄은 (1,1)을 제외하곤 모두 안보이기 때문에 -1을한다.
		cout << d[n] * 2 - 1<<"\n";
	}
  return 0;
}
