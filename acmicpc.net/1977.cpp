// 1977. 완전제곱수
#include <iostream>

using namespace std;

int a[10001];
int main()
{
	for (int i = 1; i < 101; i++)
	{
		a[i*i] = 1; //제곱수라면 배열의 값을 1로 설정
	}
	int m, n;
	cin >> m >> n;
	int min = 0;
	int sum = 0;
	for (int i = m; i <= n; i++) //m부터 n까지 제곱수를 찾음
	{
		if (a[i] == 1)
		{
			if (min == 0)
			{
				min = i;
			}
			sum += i;
		}
	}
	if (min == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << sum << endl << min << endl;
	}
}
