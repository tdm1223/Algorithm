// 1074. Z
// 2019.05.14
// 수학, 분할 정복, 재귀 호출
#include<iostream>
#include<cmath>

using namespace std;

// Z를 도는 재귀함수
long long go(long long n, int r, int c)
{
	long long tmp = 0;
	if (n == 2)
	{
		if (r == 1 && c == 1)
		{
			return 1;
		}
		else if (r == 1 && c == 2)
		{
			return 2;
		}
		else if (r == 2 && c == 1)
		{
			return 3;
		}
		else if (r == 2 && c == 2)
		{
			return 4;
		}
	}

	long long mid = n / 2;
	// 좌상
	if (r <= mid && c <= mid)
	{
		tmp = tmp + go(mid, r, c);
	}
	// 우상
	else if (r <= mid && c > mid)
	{
		tmp = tmp + go(mid, r, c - mid) + ((n * n) / 4);
	}
	// 좌하
	else if (r > mid && c <= mid)
	{
		tmp = tmp + go(mid, r - mid, c) + ((n * n * 2) / 4);
	}
	// 우하
	else if (r > mid && c > mid)
	{
		tmp = tmp + go(mid, r - mid, c - mid) + ((n * n * 3) / 4);
	}

	return tmp;
}

int main()
{
	int N, r, c;
	cin >> N >> r >> c;

	long long n = pow(2, N);
	long long ans = go(n, r + 1, c + 1);
	--ans;
	cout << ans << endl;
	return 0;
}
