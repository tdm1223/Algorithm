// 9086. 문자열
// 2021.04.20
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    while (t-- > 0)
    {
        cin >> s;
        cout << s[0] << s[s.size() - 1] << endl;
    }
    return 0;
}
