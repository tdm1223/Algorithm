// 3041. N-퍼즐
// 2020.09.12
// 구현
#include<iostream>
#include<string>

using namespace std;

char map[4][4];
char origin[4][4];
int main()
{
    string s;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> s;
        for (int j = 0; j < 4; j++)
        {
            map[cnt][j] = s[j];
        }
        cnt++;
    }

    // 완성본을 미리 만들어줌
    cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            origin[i][j] = cnt + 'A';
            cnt++;
        }
    }

    // 입력값과 완성본을 비교함
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 4; l++)
                {
                    if (origin[i][j] == map[k][l])
                    {
                        ans += abs(i - k) + abs(j - l);
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
