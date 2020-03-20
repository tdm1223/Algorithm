// 프렌즈4블록
// 2019.08.27
#include<string>
#include<vector>
#include<set>
#include<stack>

using namespace std;

set<pair<int, int>> deleteSet;
int solution(int m, int n, vector<string> board) {
	int answer = 0;

	while (1)
	{
		bool flag = false;
		deleteSet.clear();
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if (board[i][j] != '.')
				{
					char c = board[i][j];
					// 주변 4칸이 같은 블록인지 확인
					if (board[i + 1][j] == c && board[i][j + 1] == c && board[i + 1][j + 1] == c)
					{
						flag = true;
						deleteSet.insert({ i,j });
						deleteSet.insert({ i + 1,j });
						deleteSet.insert({ i,j + 1 });
						deleteSet.insert({ i + 1,j + 1 });
					}
				}
			}
		}

		// 없어지는 블록의 위치를 .으로 만들어줌
		for (auto iter = deleteSet.begin(); iter != deleteSet.end(); iter++)
		{
			board[iter->first][iter->second] = '.';
		}

		// 없어지는 블록 수만큼 답 증가
		answer += deleteSet.size();

		// 재배열
		for (int i = 0; i < n; i++)
		{
			stack<char> st;
			for (int j = 0; j < m; j++)
			{
				if (board[j][i] != '.')
				{
					st.push(board[j][i]);
				}
			}

			int cnt = m - 1;
			for (int j = 0; j < m; j++)
			{
				board[j][i] = '.';
			}
			while (!st.empty())
			{
				board[cnt][i] = st.top();
				st.pop();
				cnt--;
			}
		}

		if (!flag)
		{
			break;
		}
	}
	return answer;
}
