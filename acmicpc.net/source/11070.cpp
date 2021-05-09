// 11070. 피타고라스 기댓값
// 2021.05.09
// 구현
#include<iostream>

using namespace std;

pair<int, int> teams[1001];
int main()
{
    int t;
    cin >> t;
    int n, m;
    int a, b, p, q;

    while (t-- > 0)
    {
        for (int i = 0; i < 1001; i++)
        {
            teams[i].first = 0;
            teams[i].second = 0;
        }
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> p >> q;
            teams[a].first += p;
            teams[a].second += q;

            teams[b].first += q;
            teams[b].second += p;
        }

        int maxValue = 0;
        int minValue = 987654321;

        for (int i = 1; i <= n; i++)
        {
            float s = teams[i].first * teams[i].first;
            float a = teams[i].second * teams[i].second;
            if (s + a == 0)
            {
                minValue = 0;
                continue;
            }
            float sum = s / (s + a) * 1000;
            int k = (int)sum;
            maxValue = max(maxValue, k);
            minValue = min(minValue, k);
        }
        cout << maxValue << endl << minValue << endl;
    }
    return 0;
}
