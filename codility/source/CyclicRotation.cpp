// CyclicRotation
// 2020.01.15
vector<int> solution(vector<int> &A, int K)
{
    vector<int> ans;
    if(A.size()==0)
    {
        return ans;
    }
    K = A.size()-(K%A.size());

    // 순환
    for(int i=K;i<A.size();i++)
    {
        ans.push_back(A[i]);
    }
    for(int i=0;i<K;i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
}
