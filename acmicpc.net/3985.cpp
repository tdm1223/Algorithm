// 3985. 롤 케이크
// 2019.05.21
// 시뮬레이션
// https://tdm1223.tistory.com/98
#include<iostream>
#include<vector>

using namespace std;

int cake[1001]; // 케이크
int audience[1001]; // 방청객이 획득한 조각
vector<pair<int, int>> v;
int first; // 가장 많은 조각을 받을 것으로 기대하고 있던 방청객의 번호
int second; // 실제로 가장 많은 조각을 받은 방청객의 번호
int tmp;
int main()
{
    int l, n;
    cin >> l >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({ a,b });
        int cnt = b - a + 1;
        if (cnt > tmp)
        {
            first = i;
            tmp = cnt;
        }
    }

    // 뒤에서부터 케이크 먹으려고한거 체크
    for (int i = v.size() - 1; i >= 0; i--)
    {
        for (int j = v[i].first; j <= v[i].second; j++)
        {
            cake[j] = i + 1;
        }
    }

    // 케이크에 써있는 방청객의 조각 증가
    for (int i = 0; i <= l; i++)
    {
        audience[cake[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (audience[i] > cnt)
        {
            cnt = audience[i];
            second = i;
        }
    }
    cout << first << endl << second << endl;
    return 0;
}
