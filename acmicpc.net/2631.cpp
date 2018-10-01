//2631. 줄 세우기
#include<iostream>

using namespace std;

int d[1001]; //d[i] : i번째 까지 제대로 줄을 선 아이들의 최대 수
int a[1001];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		d[i] = 1;
		for (int j = 0; j < i; j++)
			if (a[i] > a[j])
				d[i] = max(d[i], d[j] + 1);
		ans = max(ans, d[i]);
	}
	//전체 아이들의 수에서 구한 제대로 줄을 선 아이들의 수를 뺌.
	cout << n - ans << endl;
	return 0;
}
