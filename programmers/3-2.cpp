//멀리 뛰기
#include <string>
#include <vector>

using namespace std;
int d[2001];
long long solution(int n)
{
    d[1]=1;
    d[2]=2;
    for(int i=3;i<=n;i++)
    {
        d[i]=d[i-1]+d[i-2];
        d[i]%=1234567;
    }
    return d[n];
}
