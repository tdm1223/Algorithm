// 17838. 커맨드
// 2021.06.17
// 구현
#include<iostream>
#include<string>

using namespace std;

string s;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> s;
        if (s.size() == 7)
        {
            if ((s[0] == s[1] && s[0] == s[4]) && (s[2] == s[3] && s[3] == s[5] && s[5] == s[6]) && s[0] != s[2])
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
