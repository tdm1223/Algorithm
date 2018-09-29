// https://www.hackerrank.com/challenges/ctci-array-left-rotation
vector<int> rotLeft(vector<int> a, int d)
{
    vector<int> ans;
    for(int i=0;i<a.size();i++)
    {
        ans.push_back(a[(i+d)%a.size()]);
    }
    return add_const;
}
