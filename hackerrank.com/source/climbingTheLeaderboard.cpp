//https://www.hackerrank.com/challenges/climbing-the-leaderboard
vector <int> climbingLeaderboard(vector <int> scores, vector <int> alice)
{
    //중복 제거후 내림차순 정렬
    scores.erase(unique(scores.begin(), scores.end()), scores.end());
    sort(scores.begin(), scores.end(), greater<int>());
    int rank = scores.size();
    rank++;
    vector<int> ans;
    int cnt = scores.size() - 1;
    for (int i = 0; i < alice.size(); i++)
    {
        while (alice[i] >= scores[cnt])
        {
            if (rank == 1)
            {
                break;
            }
            cnt--;
            rank--;
        }
        ans.push_back(rank);
    }
    return ans;
}
