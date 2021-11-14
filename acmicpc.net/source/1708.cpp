// 1708. 볼록 껍질
// 2021.11.15
// 볼록 껍질
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

struct pos
{
    long long x, y;
};

pos firstPos;

long long CCW(pos p1, pos p2, pos p3)
{
    return (p1.x * p2.y + p2.x * p3.y + p3.x * p1.y) - (p1.y * p2.x + p2.y * p3.x + p3.y * p1.x);
}

long long GetDistance(pos a, pos b)
{
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

// 0번째 점과 이루는 각도 순 정렬
bool Compare(pos a, pos b)
{
    long long cc = CCW(firstPos, a, b);
    if (cc != 0)
    {
        return cc > 0;
    }
    else
    {
        return GetDistance(firstPos, a) < GetDistance(firstPos, b);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].x >> v[i].y;
    }

    firstPos = v[0];

    for (int i = 1; i < n; ++i)
    {
        if (v[i].y < firstPos.y)
        {
            firstPos = v[i];
        }
        else if (v[i].y == firstPos.y)
        {
            if (v[i].x < firstPos.x)
            {
                firstPos = v[i];
            }
        }
    }

    sort(v.begin(), v.end(), Compare);

    stack<pos> s;

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

            if (CCW(first, second, v[i]) > 0)
            {
                s.push(second);
                break;
            }
        }
        s.push(v[i]);
    }

    cout << s.size() << endl;
    return 0;
}
