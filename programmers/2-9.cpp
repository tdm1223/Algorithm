//가장 큰 정사각형 찾기
#include <iostream>
#include<vector>
using namespace std;
int min(int a, int b)
{
	return a > b ? b : a;
}
int solution(vector<vector<int>> board)
{
	int answer = 0;
	int max = 0;

	if (board[0].size() < 2 || board.size() < 2)
	{
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[0].size(); j++)
			{
				if (board[i][j] == 1)
				{
					max = 1;
				}
			}
		}
	}
	else
	{
		for (int i = 1; i < board.size(); i++)
		{
			for (int j = 1; j < board[0].size(); j++)
			{
				if (board[i][j] == 1)
				{
					board[i][j] = min(min(board[i - 1][j], board[i][j - 1]), board[i - 1][j - 1]) + 1;
					if (board[i][j] > max)
					{
						max = board[i][j];
					}
				}
			}
		}
	}
	return max * max;
}
