// 2738. 행렬 덧셈
// 2019.08.08
// 수학
#include<iostream>

using namespace std;

int A[101][101];
int B[101][101];
int ans[101][101];
int main()
{
	int n, m;
	cin >> n >> m;
	// A입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	// B입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> B[i][j];
		}
	}
	// 행렬의 덧셈
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[i][j] = A[i][j] + B[i][j];
		}
	}
	// 답 출력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
