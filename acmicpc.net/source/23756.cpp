// 23756. 노브 돌리기
// 2022.05.06
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    int start;
    cin >> n;
    cin >> start;

    int current = start;
    int angle;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> angle;
        // direct move, indirect move
        ans += min(abs(current - angle), 360 - abs(current - angle));
        current = angle;
    }
    cout << ans << endl;
    return 0;
}
