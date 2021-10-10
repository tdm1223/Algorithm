// 8932. 7종 경기
// 2021.10.10
// 수학
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

struct Score
{
    double A, B, C;
};

Score scores[7] = {
    {9.23076, 26.7, 1.835},
    {1.84523, 75, 1.348},
    {56.0211, 1.5, 1.05},
    {4.99087, 42.5, 1.81},
    {0.188807, 210, 1.41},
    {15.9803, 3.8, 1.04},
    {0.11193, 254, 1.88}
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            double P;
            cin >> P;
            if (scores[i].B >= P)
            {
                ans += floor((scores[i].A * pow(scores[i].B - P, scores[i].C)));
            }
            else
            {
                ans += floor((scores[i].A * pow(P - scores[i].B, scores[i].C)));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
