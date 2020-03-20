//https://www.hackerrank.com/challenges/magic-square-forming

//magic square의 모든 경우의 수는 8개이므로 8개를 모두 미리 선언한다.
int arr[8][3][3] =
{
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
};


int formingMagicSquare(vector<vector<int>> s)
{
    int ans = 81;
    for (int k = 0; k < 8; k++)
    {
        int cost = 0;
        //값이 최소인것읖 구한다.
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cost += abs(s[i][j] - arr[k][i][j]);
            }
        }
        if (cost < ans)
        {
            ans = cost;
        }
    }
    return ans;
}
