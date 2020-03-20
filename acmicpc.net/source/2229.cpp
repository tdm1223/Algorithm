// 2229. 조짜기
// 2019.05.20
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int a[1001];
int d[1001]; // d[i] : i번째 까지의 잘짜여진 정도의 최댓값
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		// 나이순으로 정렬이 되어있으므로 입력할때마다 바로 비교를 함.
		scanf("%d", i + a);
		int min = 987654321;
		int max = 0;
		// 끝에서 부터 비교
		for (int j = i; j > 0; j--)
		{
			if (a[j] > max)
			{
				max = a[j];
			}
			if (a[j] < min)
			{
				min = a[j];
			}
			if (d[i] < d[j - 1] + max - min)
			{
				d[i] = d[j - 1] + max - min;
			}
		}
	}
	cout << d[n] << endl;
	return 0;
}
