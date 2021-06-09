// 1251. 단어 나누기
// 2021.06.09
// 브루트 포스
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    string a = "";
    string b = "";
    string c = "";
    for (int i = 1; i < s.size() - 1; i++)
    {
        for (int j = 1; j < s.size() - i; j++)
        {
            // 세 단어로 나누기
            a = s.substr(0, i);
            b = s.substr(i, j);
            c = s.substr(i + j, s.size() - i - j);

            // 각각 뒤집기
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());

            // 합치기
            string tmp = a + b + c;

            if (ans == "")
            {
                ans = tmp;
            }
            else if (ans > tmp)
            {
                ans = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
