// 13305. 주유소
// 2019.12.01
// 스택, 그리디 알고리즘
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<long long> distance(n-1);
    vector<long long> price(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> distance[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    stack<long long> s;
    long long dist = 0;
    long long ans = 0;
    for (int i = 0; i < n-1; i++)
    {
        // 맨처음 가격은 스택에 넣고 거리를 저장
        if (s.empty())
        {
            s.push(price[i]);
            dist += distance[i];
        }
        // 가격이 더 쌀때
        else if (s.top() >= price[i])
        {
            // 현재까지 얻은거중 가잔 싼값으로 가격 계산
            ans += s.top()*dist;
            dist = distance[i];
            s.push(price[i]);
        }
        // 가격이 더 비쌀때는 거리만 추가해줌
        else if (s.top() < price[i])
        {
            dist += distance[i];
        }
    }
    ans+=s.top()*dist;
    cout << ans << "\n";
    return 0;
}
