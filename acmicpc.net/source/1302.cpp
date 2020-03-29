// 1302. 베스트셀러
// 2020.03.29
// 정렬, 탐색
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> lib;
    while (n-- > 0)
    {
        string s;
        cin >> s;
        if (lib.find(s) == lib.end())
        {
            lib[s] = 1;
        }
        else
        {
            lib[s]++;
        }
    }

    int maxCount = -1;
    string ans = "{";
    for (auto name : lib)
    {
        if (name.second > maxCount)
        {
            maxCount = name.second;
            ans = name.first;
        }
        else if (name.second == maxCount)
        {
            if (name.first.compare(ans) == -1)
            {
                ans = name.first;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
