// 불량 사용자
// 2020.04.08
#include<string>
#include<vector>
#include<set>

using namespace std;

vector<vector<int>> idx;
set<string> check;

int visit[9];
int answer = 0;
void go(int index, int n, int size)
{
    if (n == size)
    {
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(visit[i]);
        }
        if (s.size() == size)
        {
            string tmp = "";
            for (auto i : s)
            {
                tmp += i + '0';
            }
            if (check.find(tmp) == check.end())
            {
                check.insert(tmp);
                answer++;
            }
        }
        return;
    }
    for (int i = 0; i < idx[index].size(); i++)
    {
        visit[n] = idx[index][i];
        go(index + 1, n + 1, size);
    }

}
int solution(vector<string> user_id, vector<string> banned_id) {
    idx.resize(banned_id.size());
    for (int i = 0; i < banned_id.size(); i++)
    {
        vector<int> starIdx; // banned_id에서 *의 위치를 저장하는 벡터
        for (int j = 0; j < banned_id[i].size(); j++)
        {
            if (banned_id[i][j] == '*')
            {
                starIdx.push_back(j);
            }
        }

        // 현재 아이디가 banned_id에서 어디에 만족할수 있는지 확인
        string cur_banned_id = banned_id[i];
        for (int j = 0; j < user_id.size(); j++)
        {
            string cur_user_id = user_id[j];
            for (int k = 0; k < starIdx.size(); k++)
            {
                cur_user_id[starIdx[k]] = '*';
            }
            if (cur_banned_id == cur_user_id)
            {
                idx[i].push_back(j);
            }
        }
    }

    // 경우의수 찾기
    go(0, 0, banned_id.size());
    return answer;
}
