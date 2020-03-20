// 5557. 1학년
// 2019.05.21
// 다이나믹 프로그래밍
// https://tdm1223.tistory.com/87
#include<iostream>
#include<vector>

using namespace std;

long long d[100][21]; // d[i][j] : i까지 수를 사용해서 j를 만드는 방법의 수
int main()
{
	int n;
	cin >> n;
	n -= 1; // 마지막수는 따로 입력 받기위해 1을 빼줌
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int last;
	cin >> last; // 마지막수 입력받음
	d[0][v[0]] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			if (j - v[i] >= 0)
			{
				d[i][j] += d[i - 1][j - v[i]];
			}
			if (j + v[i] <= 20)
			{
				d[i][j] += d[i - 1][j + v[i]];
			}
		}
	}

	cout << d[n - 1][last] << endl; // n-1번째까지 수로 last를 만들수 있는 경우의 개수가 정답
	return 0;
}
