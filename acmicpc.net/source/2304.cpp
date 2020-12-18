// 2304. 창고 다각형
// 2020.12.18
// 스택
#include<iostream>
#include<stack>

using namespace std;

stack<int> st;

int column[1001];
int first = 1001;
int last;
int maxPos;
int ans;
int main()
{
    int pos;
    int height;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> pos >> height;
        column[pos] = height;
        if (last < pos)
        {
            last = pos;
        }
        if (first > pos)
        {
            first = pos;
        }
        if (height > column[maxPos])
        {
            maxPos = pos;
        }
    }

    // 최초 기둥이 있는 지점부터 가장 높은 지점까지 넓이 구함
    for (int i = first; i <= maxPos; i++)
    {
        if (column[i])
        {
            if (st.empty() || column[i] > st.top())
            {
                st.push(column[i]);
            }
        }
        ans += st.top();
    }

    while (!st.empty())
    {
        st.pop();
    }

    // 맨뒤 기둥이 있는 지점부터 가장 높은 지점까지 넓이 구함
    for (int i = last; i > maxPos; i--)
    {
        if (column[i])
        {
            if (st.empty() || column[i] > st.top())
            {
                st.push(column[i]);
            }
        }
        ans += st.top();
    }

    cout << ans << endl;
    return 0;
}
