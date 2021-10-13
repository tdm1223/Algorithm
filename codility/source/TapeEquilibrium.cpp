// TapeEquilibrium
// 2021.10.14
int solution(vector<int>& A)
{
    int left = A[0];
    int right = 0;
    for (int i = 1; i < A.size(); i++)
    {
        right += A[i];
    }

    int ans = abs(left - right);

    int sum;
    for (int i = 1; i < A.size() - 1; i++)
    {
        left += A[i];
        right -= A[i];
        sum = abs(left - right);
        if (ans > sum)
        {
            ans = sum;
        }
    }
    return ans;
}
