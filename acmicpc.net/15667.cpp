// 15667. 2018 연세대학교 프로그래밍 경진대회
// 2019.10.09
// 수학
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = 1;
	int sum = 0;
	while (1)
	{
		int sum = pow(k, 0) + pow(k, 1) + pow(k, 2);
		if (sum == n)
		{
			break;
		}
		k++;
	}
	cout << k << endl;
	return 0;
}
