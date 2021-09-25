// 21771. 가희야 거기서 자는 거 아니야
// 2021.09.25
// 문자열
#include<iostream>

using namespace std;

char arr[101][101];
int n, m;
int rg, cg;
int rp, cp;

pair<int, int> GetStartPoint()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'P')
            {
                return { i,j };
            }
        }
    }
}

int main()
{
    cin >> n >> m >> rg >> cg >> rp >> cp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j];
        }
    }

    pair<int, int> startPoint = GetStartPoint();
    int startX = startPoint.first;
    int startY = startPoint.second;

    bool flag = true;
    for (int i = startX; i < startX + rp; i++)
    {
        for (int j = startY; j < startY + cp; j++)
        {
            if (arr[i][j] != 'P')
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    return 0;
}
