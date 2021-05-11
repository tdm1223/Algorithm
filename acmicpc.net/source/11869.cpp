// 11869. 님블
// 2021.05.11
// 게임 이론, 스프라그–그런디 정리
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        ans ^= k;
    }

    if (ans > 0)
    {
        cout << "koosaga" << endl;
    }
    else
    {
        cout << "cubelover" << endl;
    }
    return 0;
}
