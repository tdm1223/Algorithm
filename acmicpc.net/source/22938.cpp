// 22938. 백발백준하는 명사수
// 2022.02.13
// 기하학, 수학
#include<iostream>

using namespace std;

int main()
{
    long long x1, y1, r1;
    long long x2, y2, r2;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    // 두 점사이의 거리와 반지름의 합을 비교하면 된다.
    long long dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

    if (dist < (r1 + r2) * (r1 + r2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
