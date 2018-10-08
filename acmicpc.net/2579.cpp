// 2579. 계단 오르기
#include<iostream>
#include<vector>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[301]; //d[i] : i까지 올랐을 때 총 점수의 최댓값
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);//계단

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	d[0] = v[0];
	d[1] = max(v[0] + v[1], v[1]);
	d[2] = max(v[0] + v[2], v[1] + v[2]);

	for (int i = 3; i < n; i++)
	{
		//(현재칸과 2번째 전의 칸의 합) 과 (현재칸 + 바로 전칸 + 3번째 전칸의 합)중 최댓값
		d[i] = max(d[i - 2] + v[i], d[i - 3] + v[i - 1] + v[i]);
	}

	cout << d[n - 1] << endl;
	return 0;
}
