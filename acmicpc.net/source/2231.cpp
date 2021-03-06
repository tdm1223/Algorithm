// 2231. 분해합
// 2019.05.20
// 브루트 포스
#include<iostream>

using namespace std;

// 숫자를 분해하여 그 합을 구하는 함수
int DivSum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;

	// 생성자가 없는 경우엔 0을 출력해야 하므로 0으로 초기화
	int ans = 0;
	// 가장 작은 생성자를 구하는 것이므로 1부터 시작한다.
	for (int i = 1; i <= n; i++)
	{
		if (i + DivSum(i) == n)
		{
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
