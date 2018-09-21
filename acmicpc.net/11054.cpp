// 11054. 가장 긴 바이토닉 부분 수열
#include<iostream>
using namespace std;

int a[1001];
int d[2][1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	//앞에서 부터 하는 가장 긴 증가 부분수열
	for (int i = 1; i <= n; i++)
	{
		int max = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				if (max < d[0][j])
					max = d[0][j];
			}
		}
		d[0][i] = max + 1;
	}

	//뒤에서 부터 하는 가장 긴 증가 부분수열
	for (int i = n; i >= 1; i--)
	{
		int max = 0;
		for (int j = n; j > i; j--)
		{
			if (a[i] > a[j])
			{
				if (max < d[1][j])
					max = d[1][j];
			}
		}
		if (d[1][i] < max + 1)
			d[1][i] = max + 1;
	}
	int max = 0;
	for (int i = 1; i <= n; i++)
	{
		if (max < d[0][i] + d[1][i])
			max = d[0][i] + d[1][i];
	}

	cout << max - 1 << endl; //자기 자신 두번 포함하기에 -1
	return 0;
}
