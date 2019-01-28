// 9663. N-Queen
// 2019.01.28
#include<iostream>

using namespace std;

int n;
int col[15];
int result;

void Queen(int i)
{
	// 퀸 n개를 다 세웠다면 결과에 1을 더함
	if (i == n)
	{
		result += 1;
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			col[i] = j;
			bool flag = true;
			for (int j = 0; j < i; j++)
			{
				// 퀸을 놓을수 있는지 체크
				if (col[j] == col[i] || abs(col[i] - col[j]) == (i - j))
				{
					// 놓을 수 없다면 중지
					flag = false;
					break;
				}
			}
			if (flag)
			{
				Queen(i + 1);
			}
		}
	}
}

int main()
{
	cin >> n;
	Queen(0);
	cout << result << endl;
	return 0;
}
