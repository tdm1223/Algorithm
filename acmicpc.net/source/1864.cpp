// 1864. 문어 숫자
// 2022.06.19
// 구현
#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    map<char, int> maps;
    maps.insert({ '-', 0 });
    maps.insert({ '\\', 1 });
    maps.insert({ '(', 2 });
    maps.insert({ '@', 3 });
    maps.insert({ '?', 4 });
    maps.insert({ '>', 5 });
    maps.insert({ '&', 6 });
    maps.insert({ '%', 7 });
    maps.insert({ '/', -1 });

    while (1)
    {
        string s;
        cin >> s;

        if (s == "#")
        {
            break;
        }
        reverse(s.begin(), s.end());

        int ans = 0;
        int mul = 1;
        for (int i = 0; i < s.size(); i++)
        {
            ans = ans + maps[s[i]] * mul;
            mul *= 8;
        }
        cout << ans << endl;
    }
    return 0;
}
