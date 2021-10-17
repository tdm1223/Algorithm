// MaxProductOfThree
// 2021.10.17
#include <algorithm>

int solution(vector<int>& A)
{
    sort(A.begin(), A.end());
    int size = A.size();
    return max(A[0] * A[1] * A[size - 1], A[size - 1] * A[size - 2] * A[size - 3]);
}
