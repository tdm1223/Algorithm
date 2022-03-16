// 17413. 단어 뒤집기 2
// 2022.03.17
// 자료구조, 스택
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    stack<char> st;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            while (1)
            {
                cout << s[i];
                if (s[i] == '>')
                {
                    break;
                }
                i++;
            }
        }
        else if (s[i] == ' ')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
        else
        {
            st.push(s[i]);
        }
    }

    // 남은거 출력
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}
