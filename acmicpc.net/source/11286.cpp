// 11286. 절댓값 힙
// 2021.04.24
// 자료구조
#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

struct cmp {
    bool operator()(pair<int, int>& a, pair<int, int>& b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first > b.first;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;

    int n, k;
    cin >> n;
    while (n-- > 0)
    {
        cin >> k;
        if (k == 0)
        {
            if (q.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << q.top().first * q.top().second << "\n";
                q.pop();
            }
        }
        else if (k > 0)
        {
            q.push({ abs(k), 1 });
        }
        else if (k < 0)
        {
            q.push({ abs(k), -1 });
        }
    }
    return 0;
}
