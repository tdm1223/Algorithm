//https://www.hackerrank.com/challenges/angry-children
int maxMin(int k, vector<int> arr)
{
    sort(arr.begin(),arr.end());
    int answer = 100000000;
    for(int i=0;i<arr.size()-k+1;i++)
    {
        answer=min(answer,arr[i+k-1]-arr[i]);
    }
    return answer;
}
