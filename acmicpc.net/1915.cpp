// 1915. 가장 큰 정사각형
#include<iostream>
#include<string>
using namespace std;

int d[1001][1001]; //d[i][j] : (i,j)를 우측 끝으로 하는 최대 정사각형의 한변의 길이
int a[1001][1001];
int min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			a[i][j] = int(s[j] - '0');
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 1)
			{
				//d[i-1][j-1], d[i][j-1], d[i-1][j]의 최솟값 + 1 로 갱신
				d[i][j] = min(min(d[i - 1][j - 1], d[i - 1][j]), d[i][j - 1]) + 1;
				max = max > d[i][j] ? max : d[i][j];
			}
		}
	}

	cout << max * max << endl; //넓이 출력
	return 0;
}
