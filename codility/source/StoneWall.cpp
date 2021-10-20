// StoneWall
// 2021.10.21
#include<stack>
int solution(vector<int>& H)
{
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < H.size(); i++)
    {
        while (!st.empty() && st.top() > H[i])
        {
            st.pop();
        }
        if (st.empty() || st.top() < H[i])
        {
            st.push(H[i]);
            ans++;
        }
    }
    return ans;
}
