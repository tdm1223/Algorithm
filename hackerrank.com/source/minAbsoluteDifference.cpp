// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array
// greedy algorithm
int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int min = abs(arr[1]-arr[0]);
    for(int i=2;i<arr.size();i++)
    {
        if(abs(arr[i]-arr[i-1])<min)
            min=arr[i]-arr[i-1];
    }
    return min;
}
