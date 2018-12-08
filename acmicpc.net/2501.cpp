// 2501. 약수 구하기
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int count = 0;
	int ans = 0;
	// 1부터 n까지 순서대로 약수들을 구함
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			count++;
			// k번째 일땐 종료
			if (count == k)
			{
				ans = i;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
