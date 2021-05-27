// 4889. 안정적인 문자열
// 2021.05.28
// 자료구조, 스택
#include<stack>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int cnt = 1;
    while (1)
    {
        string s;
        int ans = 0;
        stack<char> st; //문자열의 문자를 넣는 스택
        cin >> s;
        if (s[0] == '-')
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            // 스택이 비어있는 상태에서 }를 만나면 개수를 늘리고 {로 바꿈
            if (st.size() == 0 && s[i] == '}')
            {
                ans++;
                s[i] == '{';
                st.push(s[i]);
            }
            // 스택에 비어있지 않고 }면 뺌
            else if (!st.empty() && s[i] == '}')
            {
                st.pop();
            }
            // {면 스택에 추가
            else
            {
                st.push(s[i]);
            }
        }
        ans += st.size() / 2; //남아있는 스택 크기에 반을 더함
        cout << cnt++ << ". " << ans << '\n';
    }
    return 0;
}
