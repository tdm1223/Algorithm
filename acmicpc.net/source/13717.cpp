// 13717. 포켓몬 GO
// 2021.09.16
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    int k, m;
    int maxValue = -1;
    string maxName = "";
    int ansCnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> k >> m;

        int cnt = 0;
        while (m - k >= 0)
        {
            m -= k;
            m += 2;
            cnt++;
            ansCnt++;
        }

        if (cnt > maxValue)
        {
            maxName = s;
            maxValue = cnt;
        }
    }

    cout << ansCnt << endl << maxName << endl;
    return 0;
}
