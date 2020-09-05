// 9019. DSLR
// 2020.09.06
// BFS
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

bool visit[10001];
char how[10001]; // how[next] : next로 어떤 방식을 써서 갔는지 저장
int from[10001]; // from[next] : next가 어떤 수에서 왔는지 저장
void Init()
{
    for (int i = 0; i < 10001; i++)
    {
        visit[i] = false;
        how[i] = 0;
        from[i] = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        Init();
        visit[a] = true;
        // dist[a] = 0;
        from[a] = -1;
        queue<int> q;
        q.push(a);
        while (!q.empty())
        {
            int now = q.front();
            q.pop();
            // D : 2배 후 10000으로 나눈 나머지
            int next = (now * 2) % 10000;
            if (visit[next] == false)
            {
                q.push(next);
                visit[next] = true;
                from[next] = now;
                how[next] = 'D';
            }

            // S : 1을 뺀 값. -1이면 9999로
            next = now - 1;
            if (next == -1)
            {
                next = 9999;
            }
            if (visit[next] == false)
            {
                q.push(next);
                visit[next] = true;
                from[next] = now;
                how[next] = 'S';
            }

            // L : 각 자릿수를 왼편으로 회전
            next = (now % 1000) * 10 + now / 1000;
            if (visit[next] == false)
            {
                q.push(next);
                visit[next] = true;
                from[next] = now;
                how[next] = 'L';
            }

            // R : 각 자릿수를 오른편으로 회전
            next = (now / 10) + (now % 10) * 1000;
            if (visit[next] == false)
            {
                q.push(next);
                visit[next] = true;
                from[next] = now;
                how[next] = 'R';
            }
        }

        // 답 출력
        string ans = "";
        while (b != a)
        {
            ans += how[b];
            b = from[b];
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}
