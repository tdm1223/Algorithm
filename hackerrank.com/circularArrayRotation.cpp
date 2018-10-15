//https://www.hackerrank.com/challenges/circular-array-rotation
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    vector<int> tmp(a.size());
    for(int i=0;i<a.size();i++)
    {
        tmp[(i+k)%a.size()]=a[i];
    }
    vector<int> ans;
    for(int i=0;i<queries.size();i++)
    {
        ans.push_back(tmp[queries[i]]);
    }
    return ans;
}
