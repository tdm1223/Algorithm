// Fish
// 2021.10.18
#include<stack>

int solution(vector<int>& A, vector<int>& B)
{
    stack<int> s;
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (B[i] == 1)
        {
            s.push(A[i]);
        }
        else
        {
            while (!s.empty())
            {
                if (s.top() > A[i])
                {
                    break;
                }
                else
                {
                    s.pop();
                }
            }
            if (s.empty())
            {
                ans++;
            }
        }
    }
    return ans + s.size();
}
