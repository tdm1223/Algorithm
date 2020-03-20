//https://www.hackerrank.com/challenges/utopian-tree
int d[61];
int utopianTree(int n)
{
    d[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            d[i]=d[i-1]+1;
        }
        else
        {
            d[i]=d[i-1]*2;
        }
    }
    return d[n];
}
