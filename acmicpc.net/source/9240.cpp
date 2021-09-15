// 9240. 로버트 후드
// 2021.09.16
// 볼록 껍질
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cmath>

using namespace std;

struct pos
{
    long long x, y;
};

vector<pos> v;
// y -> x 오름차순
bool Cmp(pos a, pos b)
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

long long CCW(pos a, pos b, pos c)
{
    return (a.x * b.y + b.x * c.y + c.x * a.y) - (b.x * a.y + c.x * b.y + a.x * c.y);
}

// 0번째 점과 이루는 각도 순 정렬
bool CmpCCW(pos a, pos b)
{
    long long cc = CCW(v[0], a, b);
    if (cc != 0)
    {
        return cc > 0;
    }
    else
    {
        return (a.x + a.y) < (b.x + b.y);
    }
}

long long GetDist(pos a, pos b)
{
    long long dx = b.x - a.x;
    long long dy = b.y - a.y;
    return dx * dx + dy * dy;
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

    sort(v.begin(), v.end(), Cmp);
    sort(v.begin() + 1, v.end(), CmpCCW);

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

    // 답을 도출하기 위해 스택에 있는것을 CCW Vector에 옮겨줌
    vector<pos> ccwVector;
    while (!s.empty())
    {
        ccwVector.push_back(s.top());
        s.pop();
    }

    long long ans = 0;
    for (int i = 0; i < ccwVector.size(); i++)
    {
        for (int j = i + 1; j < ccwVector.size(); j++)
        {
            if (ans < GetDist(ccwVector[i], ccwVector[j]))
            {
                ans = GetDist(ccwVector[i], ccwVector[j]);
            }
        }
    }

    printf("%lf", sqrt(ans));
    return 0;
}
