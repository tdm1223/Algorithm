// 10822. 더하기
// 2019.01.29
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    int sum = 0;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',')
        {
            sum += stoi(ans);
            ans = "";
        }
        else
        {
            ans += s[i];
        }
    }
    cout << sum+stoi(ans)<<'\n';
    return 0;
}
