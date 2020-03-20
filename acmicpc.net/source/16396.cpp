// 16396. 선 그리기
// 2019.05.24
// 구현
#include<iostream>

using namespace std;

bool check[10001][10001]; // check[i][j] : 선분 i~j 선분 그려졌는지 여부
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		// 선분을 check배열에 표시한다.
		for (int j = x; j < y; j++)
		{
			check[j][j + 1] = true;
		}
	}

	int ans = 0;
	for (int i = 1; i < 10001; i++)
	{
		// i~(i+1)이 체크되어있다면 선분길이+1
		if (check[i][i + 1])
		{
			ans++;
		}
	}
	// 결과 출력
	cout << ans << endl;
	return 0;
}
