// 15354. Aron
// 2021.06.11
// 구현, 영어 문제
#include<iostream>

using namespace std;

int main()
{
    int ans = 1;
    int n;
    cin >> n;

    char c;
    cin >> c;
    char before = c;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        if (c != before)
        {
            ans++;
            before = c;
        }
        else if (c == before)
        {
            continue;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}
