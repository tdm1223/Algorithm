// 11060. 점프 점프
// 2018.10.15
#include<iostream>
#include<algorithm>

using namespace std;

int a[1001];
int d[1001]; //d[i] : i번째 미로에 도착했을 때 점프의 최솟값
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		d[i] = 1000; //이론상 최소점프의 최댓값 : 1, 1, ... 1(1000번)
	}
	d[0] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= a[i]; j++)
		{
			//1부터 a[i]까지 범위의 숫자만큼 최솟값을 갱신해준다.
			d[i + j] = min(d[i] + 1,d[i+j]);
		}
	}

	if (d[n - 1] == 1000)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << d[n - 1] << endl;
	}
	return 0;
}
