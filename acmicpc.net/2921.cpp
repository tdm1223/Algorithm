// 2921. 도미노
// 2018.12.08
#include<iostream>

using namespace std;

int d[1001]; //d[n] : 크기가 n인 도미노 세트에 찍혀있는 점의 개수
int main()
{
	int n;
	cin >> n;
	d[1] = 3;
	d[2] = 12;
	
	for (int i = 3; i <= n; i++)
	{
		int sum = 0;
		for (int j = i * 2; j >= i; j--)
		{
			sum += j;
		}
		d[i] = d[i - 1] + sum;
	}

	cout << d[n] << endl;
	return 0;
}
