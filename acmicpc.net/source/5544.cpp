// 5544. 리그
// 2019.12.16
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct team
{
    int index;
    int score;
    int rank;
};

bool compare(team& a, team& b)
{
    return a.score > b.score;
}
bool compare2(team& a, team& b)
{
    return a.index < b.index;
}
vector<team> teams;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        team tmp;
        tmp.index = i + 1;
        tmp.score = 0;
        tmp.rank = 0;
        teams.push_back(tmp);
    }

    for (int i = 0; i < (n*(n - 1) / 2); i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c > d)
        {
            teams[a - 1].score += 3;
        }
        else if (c < d)
        {
            teams[b - 1].score += 3;
        }
        else
        {
            teams[a - 1].score += 1;
            teams[b - 1].score += 1;
        }
    }

    sort(teams.begin(), teams.end(), compare);
    int cnt = 1;
    teams[0].rank = cnt;
    for (int i = 1; i < n; i++)
    {
        if (teams[i].score == teams[i - 1].score)
        {
            teams[i].rank = teams[i - 1].rank;
            cnt++;
        }
        else
        {
            cnt++;
            teams[i].rank = cnt;
        }
        //cout << teams[i].index << " " << teams[i].score << endl;
    }
    sort(teams.begin(), teams.end(), compare2);

    for (int i = 0; i < n; i++)
    {
        cout << teams[i].rank << "\n";
    }
    return 0;
}
