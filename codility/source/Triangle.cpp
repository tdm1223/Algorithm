// Triangle
// 2021.10.17
#include <algorithm>

int solution(vector<int>& A)
{
    int size = A.size();
    if (size < 3)
    {
        return 0;
    }

    sort(A.begin(), A.end());
    for (int i = 0; i < size - 2; i++)
    {
        if ((long long)A[i] + (long long)A[i + 1] > (long long)A[i + 2])
        {
            return 1;
        }
    }
    return 0;
}
