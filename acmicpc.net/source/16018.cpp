// 16018. Occupy parking
// 2021.09.05
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string yesterday;
    cin >> yesterday;

    string today;
    cin >> today;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (yesterday[i] == today[i] && yesterday[i] == 'C')
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
