// PermCheck
// 2021.10.16
#include<algorithm>

int solution(vector<int>& A)
{
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != i + 1)
        {
            return 0;
        }
    }
    return 1;
}
