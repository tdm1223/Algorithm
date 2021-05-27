// 12789. 도키도키 간식드리미
// 2021.05.27
// 자료구조, 스택
#include<iostream>
#include<stack>
#include<queue>

using namespace std;

queue<int> q;
stack<int> s;

int main()
{
    int n;
    int k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        q.push(k);
    }

    int serviceNum = 1;
    while (!q.empty())
    {
        int cur = q.front();
        // 현재 차례인 번호면 간식 받음
        if (cur == serviceNum)
        {
            serviceNum++;
            q.pop();
        }
        else
        {
            // 대기열에 현재 차례인 번호가 있으면 뺌
            // 아니면 대기열에 추가
            if (!s.empty() && s.top() == serviceNum)
            {
                s.pop();
                serviceNum++;
            }
            else
            {
                s.push(cur);
                q.pop();
            }
        }
    }

    bool flag = true;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        if (top != serviceNum)
        {
            flag = false;
        }
        serviceNum++;
    }

    if (flag)
    {
        cout << "Nice" << endl;
    }
    else
    {
        cout << "Sad" << endl;
    }
    return 0;
}
