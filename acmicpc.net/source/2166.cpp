// 2166. 다각형의 면적
// 2021.11.10
// 기하학
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

struct pos
{
    double x, y;
};

double CCW(pos a, pos b, pos c)
{
    return (a.x * b.y + b.x * c.y + c.x * a.y) - (b.x * a.y + c.x * b.y + a.x * c.y);
}

int main()
{
    int n;
    cin >> n;

    vector<pos> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].y;
    }

    double ans = 0.0f;

    // 첫번째 점을 기준으로 반복문을 돌며 ccw의 결과물을 더한다.
    for (int i = 1; i < n; i++)
    {
        ans += CCW(v[0], v[i - 1], v[i]);
    }

    printf("%.1f", abs(ans) / 2);
    return 0;
}
