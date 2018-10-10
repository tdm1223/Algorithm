//https://www.hackerrank.com/challenges/picking-numbers
int ans[101] = { 0 };
int pickingNumbers(vector<int> a)
{
    int answer = 0;

    for (int i = 0; i < a.size(); i++)
    {
        ans[a[i]]++;
    }

    for (int i = 2; i < 100; i++)
    {
        answer = max(answer, ans[i] + ans[i - 1]);
    }
    return answer;
}
