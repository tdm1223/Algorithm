// 1182. 부분집합의 합
// 2019.05.14
#include<iostream>

using namespace std;

int n, m;
int ans;
// i : 사용한 숫자의 갯수 , sum : 합
void go(int i, int sum)
{
	if (i == n)
	{
		if (sum == m)
		{
			ans += 1;
		}
		return;
	}
	go(i + 1, sum + a[i]); // sum에 a[i]를 더한 값
	go(i + 1, sum); // sum에 a[i]를 더하지 않은 값
}

int main()
{
  int a[20];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	go(0, 0);
	if (m == 0) // 공집합도 개수를 세기 때문에 0일 경우엔 1을 빼야한다.
	{
		ans -= 1;
	}
	cout << ans << endl;
	return 0;
}
