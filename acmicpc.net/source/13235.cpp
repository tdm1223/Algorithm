// 13235. 팰린드롬
// 2021.06.26
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool ans = true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
