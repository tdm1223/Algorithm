// 2456. 나는 학급회장이다
// 2021.05.17
// 구현
#include<iostream>

using namespace std;

int counts[4][4]; // counts[i][j] : i번 학생이 j점을 받은 개수
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        counts[1][a]++;
        counts[2][b]++;
        counts[3][c]++;
    }

    int scores[4] = { 0,0,0,0 };
    int maxScore = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            scores[i] += j * counts[i][j];
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        maxScore = max(maxScore, scores[i]);
    }

    bool dup = false;
    int ansCount[4] = { 0,0,0,0 };
    int ans = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (maxScore == scores[i])
        {
            if (ansCount[3] < counts[i][3])
            {
                ansCount[1] = counts[i][1];
                ansCount[2] = counts[i][2];
                ansCount[3] = counts[i][3];
                ans = i;
                dup = false;
            }
            else if ((ansCount[3] == counts[i][3]) && (ansCount[2] < counts[i][2]))
            {
                ansCount[1] = counts[i][1];
                ansCount[2] = counts[i][2];
                ansCount[3] = counts[i][3];
                ans = i;
                dup = false;
            }
            else if ((ansCount[3] == counts[i][3]) && (ansCount[2] == counts[i][2]))
            {
                dup = true;
            }
        }
    }

    if (dup)
    {
        cout << 0 << " " << maxScore << endl;
    }
    else
    {
        cout << ans << " " << maxScore << endl;
    }
    return 0;
}
