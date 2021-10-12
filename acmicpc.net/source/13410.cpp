// 13410. 거꾸로 구구단
// 2021.10.13
// 브루트포스
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = -1;

    int num = 0;
    string s;
    for (int i = 1; i <= k; i++)
    {
        num = n * i;
        s = to_string(num);
        reverse(s.begin(), s.end());
        num = stoi(s);
        ans = max(ans, num);
    }
    cout << ans << endl;
    return 0;
}
