// 3035. 스캐너
// 2021.04.25
// 구현
#include<iostream>
#include<string>

using namespace std;

string scanner[51];

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> scanner[i];
    }

    // 4중 for문으로 a, b배만큼 확대한다
    for (int i = 0; i < n; i++)
    {
        for (int l = 0; l < a; l++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    cout << scanner[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
