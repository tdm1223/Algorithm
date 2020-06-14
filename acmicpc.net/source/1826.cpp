// 1826. 연료 채우기
// 2020.06.14
// 그리디 알고리즘
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

priority_queue<int> pq;

struct gasStation
{
    int distance;
    int amount;
};

bool compare(gasStation& a, gasStation& b)
{
    return a.distance < b.distance;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l, q, n;
    int idx = 0;
    int ans = 0;
    cin >> n;
    vector<gasStation> gasStations(n); // 거리, 주유량
    for (int i = 0; i < n; i++)
    {
        cin >> gasStations[i].distance >> gasStations[i].amount;
    }
    cin >> l >> q;

    // 거리 기준 정렬
    sort(gasStations.begin(), gasStations.end(), compare);
    while (q < l)
    {
        // 현재 갈 수 있는 주유소들의 주유량을 힙에 넣음
        while (gasStations[idx].distance <= q)
        {
            pq.push(gasStations[idx].amount);
            idx++;
            if (idx == n)
            {
                break;
            }
        }

        if (pq.empty())
        {
            break;
        }

        // 기름 추가
        q += pq.top();
        pq.pop();
        ans++;
    }

    // 도착 못했을 경우
    if (q < l)
    {
        cout << -1 << endl;
    }
    // 도착 완료
    else
    {
        cout << ans << endl;
    }
    return 0;
}
