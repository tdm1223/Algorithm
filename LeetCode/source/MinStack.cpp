// PalindromeNumber
// 2022.08.10
// Medium
class MinStack
{
public:
    stack<int> st;
    stack<int> minSt;

    void push(int val)
    {
        st.push(val);
        if (minSt.size() == 0)
        {
            minSt.push(val);
        }
        else if (val <= minSt.top())
        {
            minSt.push(val);
        }
    }

    void pop()
    {
        int top = st.top();
        if (top == minSt.top())
        {
            minSt.pop();
        }
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minSt.top();
    }
};
