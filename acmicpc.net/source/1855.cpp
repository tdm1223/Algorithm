//1855. 암호
// 2022.02.14
// 구현
#include<iostream>
#include<string>

using namespace std;

char map[11][21];

int main()
{
    int k;
    string s;
    cin >> k >> s;
    for (int i = 0; i < s.size() / k; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < k; j++)
            {
                map[i][j] = s[i * k + j];
            }
        }
        else
        {
            for (int j = k - 1; j >= 0; j--)
            {
                map[i][j] = s[i * k + k - 1 - j];
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < s.size() / k; j++)
        {
            cout << map[j][i];
        }
    }
    cout << endl;
    return 0;
}
