// ValidParentheses
// 2021.11.27
// Easy
#include<stack>

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == ']')
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == '}')
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
