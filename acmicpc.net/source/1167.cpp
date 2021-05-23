// 1167. 트리의 지름
// 2021.05.23
// 그래프 이론
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int visit[100001];
vector<pair<int, int>> treeNode[100001];

int diameter = 0;
int furthest = 0;

void DFS(int node, int cost)
{
    // 이미 방문했으면 패스
    if (visit[node])
    {
        return;
    }

    // 방문 체크
    visit[node] = 1;

    // 지름 업데이트
    if (diameter < cost)
    {
        diameter = cost;
        furthest = node;
    }

    for (int i = 0; i < treeNode[node].size(); i++)
    {
        DFS(treeNode[node][i].first, cost + treeNode[node][i].second);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int v;
    cin >> v;

    for (int i = 0; i < v; i++)
    {
        int start;
        cin >> start;

        while (1)
        {
            int next, cost;
            cin >> next;
            if (next == -1)
            {
                break;
            }

            cin >> cost;
            treeNode[start].push_back({ next, cost });
        }
    }

    memset(visit, 0, sizeof(visit));
    // 루트에서 가장 먼 곳을 찾는다.
    DFS(1, 0);

    // 루트에서 가장 먼 곳에서 가장 먼 정점 까지의 거리를 구한다.
    memset(visit, 0, sizeof(visit));

    diameter = 0;
    DFS(furthest, 0);

    cout << diameter << endl;
    return 0;
}
