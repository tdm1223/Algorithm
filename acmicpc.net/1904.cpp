#include<iostream>

using namespace std;

int d[1000001];
int main(void)
{
	int n;
	cin >> n;
	d[1] = 1; //1
	d[2] = 2; //11,10

	//d[i]는 d[i-1]에 1을 추가한것과 d[i-2]에 00을 추가한것이므로 d[i-1]+d[i-2]이다.
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 15746;
	}

	cout << d[n] << endl;
}
