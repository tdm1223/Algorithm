// 17829. 222-풀링
// 2019.11.10
// 배열
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int board[1025][1025];
vector<int> v;
// 정렬
int calc(int x, int y, int cnt)
{
    v.clear();
    v.push_back(board[x + cnt][y]);
    v.push_back(board[x + cnt][y + cnt]);
    v.push_back(board[x][y]);
    v.push_back(board[x][y + cnt]);
    sort(v.begin(), v.end());
    return v[2];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    int num = 2;
    int cnt = n;
    while (1)
    {
        for (int i = 0; i < n; i += num)
        {
            for (int j = 0; j < n; j += num)
            {
                board[i][j] = calc(i, j, num / 2);
            }
        }
        num *= 2;
        cnt /= 2;
        if (cnt == 1)
        {
            break;
        }
    }
    cout << board[0][0] << endl;
    return 0;
}
