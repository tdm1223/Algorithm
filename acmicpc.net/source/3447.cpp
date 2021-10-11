// 3447. 버그왕
// 2021.10.11
// 문자열
#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        while (s.find("BUG") != -1)
        {
            s = regex_replace(s, regex("BUG"), "");
        }
        cout << s << "\n";
    }
    return 0;
}
