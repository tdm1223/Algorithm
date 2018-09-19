// 1904. 01타일
#include<iostream>

using namespace std;

int d[1000001];
int main(void)
{
	int n;
	cin >> n;
	d[1] = 1;
	d[2] = 2;
	//d[n] : 길이가 n인 모든 2진 수열의 개수
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 15746;
	}

	cout << d[n] << endl;
}
