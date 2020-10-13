// 1284. 집 주소
// 2020.10.14
// 구현
#include<iostream>
#include<string>

using namespace std;

int num[10] = { 5,3,4,4,4,4,4,4,4,4 };
int main()
{
    string s;
    int ans;
    while (1)
    {
        ans = 1;
        cin >> s;
        if (s == "0")
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            ans += num[s[i] - '0'];
        }
        cout << ans << endl;
    }
    return 0;
}
