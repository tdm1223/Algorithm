// Brackets
// 2021.10.18
#include<stack>
int solution(string& S)
{
    stack<char> s1;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '(')
        {
            s1.push(S[i]);
        }
        else if (S[i] == ')')
        {
            if (s1.empty())
            {
                return 0;
            }
            else
            {
                if (s1.top() != '(')
                {
                    return 0;
                }
                else
                {
                    s1.pop();
                }
            }
        }
        else if (S[i] == '[')
        {
            s1.push(S[i]);
        }
        else if (S[i] == ']')
        {
            if (s1.empty())
            {
                return 0;
            }
            else
            {
                if (s1.top() != '[')
                {
                    return 0;
                }
                else
                {
                    s1.pop();
                }
            }
        }
        else if (S[i] == '{')
        {
            s1.push(S[i]);
        }
        else if (S[i] == '}')
        {
            if (s1.empty())
            {
                return 0;
            }
            else
            {
                if (s1.top() != '{')
                {
                    return 0;
                }
                else
                {
                    s1.pop();
                }
            }
        }
    }

    if (s1.size() == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
