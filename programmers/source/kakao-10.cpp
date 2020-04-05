// 크레인 인형뽑기 게임
// 2020.04.05
#include<string>
#include<vector>
#include<stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    int n = board.size();
    stack<int> busket;

    for (int i = 0; i < moves.size(); i++)
    {
        int num = moves[i] - 1;
        for (int j = 0; j < n; j++)
        {
            if (board[j][num] != 0)
            {
                // 옮긴게 같은거라면 터짐
                if (!busket.empty() && busket.top() == board[j][num])
                {
                    busket.pop();
                    answer += 2;
                    board[j][num] = 0;
                }
                else
                {
                    busket.push(board[j][num]);
                    board[j][num] = 0;
                }
                break;
            }
        }
    }
    return answer;
}
