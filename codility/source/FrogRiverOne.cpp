// FrogRiverOne
// 2021.10.15
int arr[100001];
int solution(int X, vector<int>& A)
{
    int sum = X * (X + 1) / 2;
    int ans = -1;
    for (int i = 0; i < A.size(); i++)
    {
        if (arr[A[i]] == 0)
        {
            arr[A[i]] = 1;
            sum -= A[i];
        }

        if (sum == 0)
        {
            ans = i;
            break;
        }
    }

    return ans;
}
