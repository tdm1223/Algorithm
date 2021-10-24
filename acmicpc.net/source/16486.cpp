// 16486. 운동장 한 바퀴
// 2021.10.24
// 기하
#include<iostream>

using namespace std;

int main()
{
    int d1, d2;
    cin >> d1 >> d2;

    float ans = 0.0f;

    ans += (float)d1 * 2;
    ans += d2 * 2 * 3.141592f;
    printf("%.6f", ans);
    return 0;
}
