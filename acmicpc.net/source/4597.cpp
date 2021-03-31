// 4597. 패리티
// 2021.03.30
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    while (1)
    {
        s.clear();
        cin >> s;
        if (s == "#")
        {
            break;
        }

        int cnt = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        // 짝수 패리티
        if (s[s.size() - 1] == 'e')
        {
            // 홀수개 있음
            if (cnt % 2 == 1)
            {
                s[s.size() - 1] = '1';
            }
            // 짝수개 있음
            else
            {
                s[s.size() - 1] = '0';
            }
        }
        // 홀수 패리티
        else
        {
            // 홀수개 있음
            if (cnt % 2 == 1)
            {
                s[s.size() - 1] = '0';
            }
            // 짝수개 있음
            else
            {
                s[s.size() - 1] = '1';
            }
        }
        cout << s << endl;
    }
    return 0;
}
