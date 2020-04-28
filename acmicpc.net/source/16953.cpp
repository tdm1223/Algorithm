// 16953. A -> B
// 2020.04.28
// 브루트 포스
#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    // b에서 a로 이동
    while (1)
    {
        // b와 a가 같다면 종료
        if (b == a)
        {
            ans++;
            break;
        }
        // b가 a보다 더 작아지면 만들 수 없는 경우
        if (b < a)
        {
            ans = -1;
            break;
        }
        // b의 끝이 1이면 1을 제거(10으로 나눔)
        if (b % 10 == 1)
        {
            b /= 10;
            ans++;
        }
        // b를 2로 나눌 수 있으면 나눔
        else if (b % 2 == 0)
        {
            b /= 2;
            ans++;
        }
        // 이외의 경우에는 b를 a로 만들 수 없음
        else
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
