// 9095. 1, 2, 3 더하기
// 2019.05.22
// 다이나믹 프로그래밍
// https://tdm1223.tistory.com/77
#include<iostream>

using namespace std;

int d[11]; // d[i] : 1,2,3의 합으로 i를 만들 수 있는 경우의 수
int main()
{
	int n, k;
	cin >> n;
	while (n > 0)
	{
		n--;
		cin >> k;
		d[0] = 1;
		d[1] = 1;
		d[2] = 2;
		for (int i = 3; i <= k; i++)
		{
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}
		cout << d[k] << endl;
	}
	return 0;
}
