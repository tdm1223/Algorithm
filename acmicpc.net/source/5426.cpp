// 5426. 비밀 편지
// 2019.10.10
// 구현
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

char board[101][101];
int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		string s;
		cin >> s;
		int size = sqrt(s.size());
		int cnt = 0;
		// 배열에 입력
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				board[i][j] = s[cnt++];
			}
		}
		// 디코딩
		for (int i = size - 1; i >= 0; i--)
		{
			for (int j = 0; j < size; j++)
			{
				cout << board[j][i];
			}
		}
		cout << "\n";
	}

	return 0;
}
