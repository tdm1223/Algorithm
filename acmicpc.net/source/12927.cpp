// 12927. 배수 스위치
// 2022.07.01
// 그리디 알고리즘
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Y')
        {
            for (int j = i; j < s.size(); j += (i + 1))
            {
                if (s[j] == 'Y')
                {
                    s[j] = 'N';
                }
                else
                {
                    s[j] = 'Y';
                }
            }
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
