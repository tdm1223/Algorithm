// 14655. 욱제는 도박쟁이야!!
// 2021.09.05
// 그리디 알고리즘
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    int ans = 0;

    // 1라운드에는 모두 양수로
    // 2라운드에는 모두 음수로
    // 무조건 바꿀수 있다.
    for (int i = 0; i < n * 2; i++)
    {
        cin >> k;
        ans += abs(k);
    }
    cout << ans << endl;
    return 0;
}
