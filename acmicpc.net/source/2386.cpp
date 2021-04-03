// 2386. 도비의 영어 공부
// 2021.04.03
// 문자열
#include<iostream>
#include<string>

using namespace std;

int main()
{
    while (1)
    {
        char c;
        cin >> c;
        if (c == '#')
        {
            break;
        }
        std::string s;
        getline(cin, s);
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c || tolower(s[i]) == c)
            {
                cnt++;
            }
        }
        cout << c << " " << cnt << endl;
    }
    return 0;
}
