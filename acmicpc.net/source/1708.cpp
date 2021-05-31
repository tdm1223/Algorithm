// 1708. 볼록 껍질
// 2021.05.31
// 기하학
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

struct pos
{
    long long x, y;
};

vector<pos> v;
// y -> x 오름차순
bool cmp(pos a, pos b)
{
    if (a.y != b.y)
    {
        return a.y < b.y;
    }
    else
    {
        return a.x < b.x;
    }
}

long long ccw(pos a, pos b, pos c)
{
    return (a.x * b.y + b.x * c.y + c.x * a.y) - (b.x * a.y + c.x * b.y + a.x * c.y);
}

// 0번째 점과 이루는 각도 순 정렬
bool cmpCcw(pos a, pos b)
{
    long long cc = ccw(v[0], a, b);
    if (cc != 0)
    {
        return cc > 0;
    }
    else
    {
        return (a.x + a.y) < (b.x + b.y);
    }
}

int main()
{
    stack<pos> s;
    int n;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].y;
    }

    sort(v.begin(), v.end(), cmp);
    sort(v.begin() + 1, v.end(), cmpCcw);

    s.push(v[0]);
    s.push(v[1]);
    pos first, second;

    for (int i = 2; i < n; i++)
    {
        while (s.size() >= 2)
        {
            second = s.top();
            s.pop();
            first = s.top();
            if (ccw(first, second, v[i]) > 0)
            {
                s.push(second);
                break;
            }

        }
        s.push(v[i]);
    }

    cout << s.size();
    return 0;
}
