// 2579. 계단 오르기
#include <iostream>
#include<vector>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}
int d[301];
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];
	//d[n] : n까지 올랐을때 총 점수의 최댓 값
	d[0] = v[0];
	d[1] = max(v[0] + v[1], v[1]);
	d[2] = max(v[0] + v[2], v[1] + v[2]);

	for (int i = 3; i < n; i++)
	{
		d[i] = max(d[i - 2] + v[i], d[i - 3] + v[i - 1] + v[i]);
	}
	cout << d[n - 1] << endl;
	return 0;
}
