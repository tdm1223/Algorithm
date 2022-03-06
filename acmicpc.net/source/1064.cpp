// 1064. 평행사변형
// 2022.03.06
// 기하학
#include<iostream>
#include<cmath>

using namespace std;

double GetDist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double max3(double a, double b, double c)
{
    return max(a, max(b, c));
}

double min3(double a, double b, double c)
{
    return min(a, min(b, c));
}

int main()
{
    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    double m1 = 987654321;
    double m2 = 987654321;

    if (xa != xb)
    {
        m1 = abs(yb - ya) / abs(xb - xa);
    }
    if (xb != xc)
    {
        m2 = abs(yc - yb) / abs(xc - xb);
    }

    // 점 3개가 한 직선에 있는 경우
    if (m1 == m2)
    {
        cout << -1 << '\n';
        return 0;
    }

    // 3개의 변
    double d1 = GetDist(xa, ya, xb, yb);
    double d2 = GetDist(xa, ya, xc, yc);
    double d3 = GetDist(xb, yb, xc, yc);

    // 3개 변 중 2개를 골라서 평행 사변형을 만들었을 때 둘레의 길이
    double round1 = 2 * (d1 + d2);
    double round2 = 2 * (d2 + d3);
    double round3 = 2 * (d3 + d1);

    cout << fixed;
    cout.precision(10);
    cout << max3(round1, round2, round3) - min3(round1, round2, round3) << endl;
    return 0;
}
