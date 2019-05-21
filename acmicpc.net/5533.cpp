// 5533. 유니크
// 2019.05.21
// 구현
#include<iostream>

using namespace std;

int score[201][4];
int main()
{
	bool flag;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> score[i][0] >> score[i][1] >> score[i][2];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			flag = false;
			for (int k = 0; k < n; k++)
			{
				// score[j][i]와 같은값이 여러개 있을 수 있으므로 한바퀴 돈 후 score[j][i]를 0으로 만든다.
				// 같은값 존재 여부를 확인하기 위해 bool 변수 한개를 사용한다.
				if (score[j][i] == score[k][i] && j!=k)
				{
					flag = true;
					score[k][i] = 0;
				}
			}
			if (flag)
			{
				score[j][i] = 0;
			}
		}

		for (int j = 0; j < n; j++)
		{
			score[j][3] += score[j][i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << score[i][3] << endl;
	}
	return 0;
}
