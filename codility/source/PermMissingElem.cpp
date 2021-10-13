// PermMissingElem
// 2021.10.14
int arr[100001];
int solution(vector<int>& A)
{
    for (int i = 0; i < A.size(); i++)
    {
        arr[A[i]] = 1;
    }

    int ans = 0;
    for (int i = 1; i <= A.size() + 1; i++)
    {
        if (arr[i] == 0)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
