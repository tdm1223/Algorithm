// 1516. 게임 개발
// 2020.06.14
// 위상 정렬
#include<vector>
#include<queue>
#include<iostream>

using namespace std;

int time[501]; // time[i] : i 건물을 건설하는데 걸리는 시간
int build[501]; // build[i] : i 건물을 건설하는데 필요한 선행 건물의 개수
int main()
{
    int n;
    // n : 건물의 종류 수
    cin >> n;
    vector<vector<int>> order(n + 1); //순서를 저장. order[i]에는 i건물을 지을때 필요한 선행 건물들의 번호 저장
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> time[i];
        while (1)
        {
            cin >> k;
            if (k == -1)
            {
                break;
            }
            order[k].push_back(i); // k를 건설하는데 i가 필요하다.
            build[i]++;
        }
    }

    vector<int> ans(n + 1);
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        //선행 건물이 존재하지 않는 건물의 번호를 큐에 넣음
        if (!build[i])
        {
            q.push(i);
            ans[i] = time[i];
        }
    }

    while (!q.empty())
    {
        int m = 0;
        int current = q.front();
        q.pop();

        //현재 지으려는 건물을 짓고 관련된 건물들의 속성(선행건물의 갯수, 시간)을 조정
        for (int i = 0; i < order[current].size(); i++)
        {
            int tmp = order[current][i];
            build[tmp]--; //선행건물의 갯수를 한개 줄인다.

            // 시간 갱신
            if (ans[tmp] < ans[current] + time[tmp])
            {
                ans[tmp] = ans[current] + time[tmp];
            }

            //current 건물을 지으면 더이상 선행건물이 없는 건물들을 큐에 넣어준다.
            if (!build[tmp])
            {
                q.push(tmp);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
