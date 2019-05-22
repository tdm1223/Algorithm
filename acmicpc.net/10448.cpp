// 10448. 유레카 이론
// 2019.05.22
// 브루트 포스
#include<iostream>

using namespace std;

int n;
bool visit[46];
int d[46];
int ans;
void Find(int n, int cnt)
{
	// 3개의 수를 모두 골랐을 때
	if (cnt == 3)
	{
		// 합으로 표현될 수 있다면
		if (n == 0)
		{
			ans = true;
			return;
		}
		else
		{
			return;
		}
	}

	// 3개를 선택하는 과정
	for (int i = 1; i < 45; i++)
	{
		if (n - d[i] >= 0)
		{
			Find(n - d[i], cnt + 1);
		}
	}
}

int main()
{
	int a = 1;
	// 삼각수를 만드는 과정
	// 44가 문제의 범위에서 표현될 수 있는 가장 큰 수 이다(990)
	d[1] = 1;
	for (int i = 2; i < 45; i++)
	{
		d[i] = d[i - 1] + i;
	}
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		ans = false;
		cin >> n;
		Find(n, 0);
		cout << ans << endl;
	}
	return 0;
}
