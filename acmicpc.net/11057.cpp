#include<iostream>

using namespace std;

int d[10][1001]; //d[j][i] : j로 끝나는 i자리 오르막수
int a[1001]; //a[i] : i자리 오르막수 

int main()
{
	int n;
	cin >> n;
	a[1] = 10;
	for (int i = 0; i < 10; i++)
	{
		d[i][1] = 1; //1자리 오르막수는 10개
	}
	for (int i = 2; i < n + 1; i++) //a[2]부터 a[n]까지 구하기 위한 반복
	{
		for (int j = 0; j < 10; j++) //0부터 9까지 반복
		{
			for (int k = 0; k <= j; k++) //0부터 j까지 반복
			{//0부터 j보다 작거나 같은것을 모두 더함
				d[j][i] += d[k][i - 1] % 10007;
			}
			a[i] = (a[i] + d[j][i]) % 10007;
		}
	}

	cout << a[n] << endl;
	return 0;
}