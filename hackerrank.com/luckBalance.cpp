// https://www.hackerrank.com/challenges/luck-balance
// greedy Algorithm
int luckBalance(int k, vector<vector<int>> contests)
{
    vector <int> important;
    int impt_sum=0;
    int unimpt_sum=0;

    for (int i=0;i<contests.size();i++)
    {
        int luck,type;
        luck = contests[i][0];
        type = contests[i][1];
        if (type)
        {
            important.push_back(luck);
            impt_sum+=luck;
        }
        else
        {
            unimpt_sum+=luck;
        }
    }
    sort(important.begin(),important.end());

    if (k<=important.size())
        for (int i=important.size()-k-1;i>=0;i--)
            impt_sum-=(2*important[i]);

    return impt_sum+unimpt_sum;
}
