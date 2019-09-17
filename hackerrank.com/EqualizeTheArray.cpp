// https://www.hackerrank.com/challenges/equality-in-a-array
int a[101]; // arr[i]의 범위는 1부터 100
int equalizeArray(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        a[arr[i]]++;
    }
    int m = 0; // 가장 많이 나온 수의 개수
    for(int i=1;i<101;i++)
    {
        m = max(m,a[i]);
    }
    return arr.size()-m;
}
