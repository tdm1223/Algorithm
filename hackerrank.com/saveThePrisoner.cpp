//https://www.hackerrank.com/challenges/save-the-prisoner
//2018.10.14
int saveThePrisoner(int n, int m, int s)
{
    int ans = s+m-1;
    if(ans>n)
    {
        if(ans%n==0)//나누어 떨어지면 0이 아닌 n 반환
        {
            ans=n;
        }
        else
        {
           ans%=n; //아닐 경우 나머지 반환
        }
    }
    return ans;
}
