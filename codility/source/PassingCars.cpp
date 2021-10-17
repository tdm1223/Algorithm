// PassingCars
// 2021.10.17
int solution(vector<int>& A)
{
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
        {
            cnt++;
        }
        else
        {
            ans += cnt;
            if (ans > 1000000000)
            {
                return -1;
            }
        }
    }
    return ans;
}
