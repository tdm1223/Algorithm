// 2897. 몬스터 트럭
// 2021.11.02
// 브루트포스
#include<iostream>
#include<string>

using namespace std;

string s[51];
int ans[5];
int main()
{
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i < r - 1 && j < c - 1)
            {
                int breakCount = 0;

                // 빌딩 체크
                if (s[i][j] == '#' or s[i][j + 1] == '#' or s[i + 1][j] == '#' or s[i + 1][j + 1] == '#')
                {
                    continue;
                }

                // 주차된 차 체크
                if (s[i][j] == 'X')
                {
                    breakCount++;
                }
                if (s[i + 1][j] == 'X')
                {
                    breakCount++;
                }
                if (s[i][j + 1] == 'X')
                {
                    breakCount++;
                }
                if (s[i + 1][j + 1] == 'X')
                {
                    breakCount++;
                }

                ans[breakCount]++;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
