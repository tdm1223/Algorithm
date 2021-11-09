// 15815. 천재 수학자 성필
// 2021.11.10
// 자료구조, 스택
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    int ans = 0;

    stack<int> st;

    string s;
    cin >> s;

    int a, b;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '+':
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b + a);
            break;
        case '-':
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b - a);
            break;
        case '*':
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b * a);
            break;
        case '/':
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b / a);
            break;
        default:
            st.push(s[i] - '0');
            break;
        }
    }

    cout << st.top() << endl;
    return 0;
}
