//https://www.hackerrank.com/challenges/find-digits
int findDigits(int n)
{
    int answer=0;
    int tmp=n;
    while(n>0)
    {
        int k=n%10;
        n/=10;
        if(k==0)
        {
            continue;
        }
        if(tmp%k==0)
        {
            answer++;
        }
    }
    return answer;
}
