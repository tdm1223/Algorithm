// 16951. 블록놀이
// 2021.07.06
// 브루트포스
#include<iostream>
#include<algorithm>

using namespace std;

int height[1000];
int main()
{
    int n, k;
    int ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    ans = n;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            // a[i]를 시작으로 간격 설정
            int current = k * (j - i) + height[i];

            // 설정될 수 없는 경우
            // 1 2 3 4의 k가 2일때
            // 3을 중심으로 하면 -1 1 3 5가된다.
            // -1은 존재할수 없는 값이다.
            if (current < 1)
            {
                cnt = n;
                break;
            }

            // 간격이 맞지 않는다면 조정해야 하므로 cnt 값을 증가시킴
            if (current != height[j])
            {
                cnt++;
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
