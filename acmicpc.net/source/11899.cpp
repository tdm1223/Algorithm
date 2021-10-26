// 11899. 괄호 끼워넣기
// 2021.10.27
// 스택
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                ans++;
            }
            else
            {
                st.pop();
            }
        }
    }
    cout << ans + st.size() << endl;
    return 0;
}
