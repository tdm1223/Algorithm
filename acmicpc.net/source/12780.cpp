// 12780. 원피스
// 2021.12.25
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string h, n;
    int ans = 0;
    cin >> h >> n;
    for (int i = 0; i <= h.size() - n.size(); i++)
    {
        if (h.substr(i, n.size()) == n)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
