// 1371. 가장 많은 글자
// 2020.10.25
// 구현, 문자열
#include<iostream>
#include<string>

using namespace std;

int arr[26];
int maxValue;
int main()
{
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                arr[s[i] - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        maxValue = max(maxValue, arr[i]);
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == maxValue)
        {
            cout << (char)('a' + i);
        }
    }
    return 0;
}
