// 공백 없애기
// 2020.04.03
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            ans += str[i];
        }
    }
    cout << ans << endl;
    return 0;
}
