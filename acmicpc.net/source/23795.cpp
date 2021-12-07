// 23795. 사장님 도박은 재미로 하셔야 합니다
// 2021.12.08
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    while (1)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        ans += n;
    }
    cout << ans << endl;
    return 0;
}
