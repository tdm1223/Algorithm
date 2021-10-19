// Nesting
// 2021.10.19
#include<stack>
int solution(string& S)
{
    stack<int> st;
    for (int i = 0; i < S.size(); i++)
    {
        if (st.empty())
        {
            st.push(S[i]);
        }
        else if (st.top() == '(' && S[i] == ')')
        {
            st.pop();
        }
        else
        {
            st.push(S[i]);
        }
    }
    if (st.size() > 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
