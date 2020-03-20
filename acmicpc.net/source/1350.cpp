// 1350. 진짜 공간
// 2019.08.21
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int file[1001];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> file[i];
	}
	int size;
	cin >> size;

	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		// 나눈값을 올림함수를 통해 정수로 만들고 클러스터 크기를 곱한다.
		ans += ceil((double)file[i] / size) * size;
	}
	cout << ans << endl;
	return 0;
}
