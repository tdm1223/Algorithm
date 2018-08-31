//피보나치 수
#include <string>
#include <vector>

using namespace std;
int d[100001];
int solution(int n)
{
    int answer = 0;
    d[0]=0;
    d[1]=1;
    for(int i=2;i<=n;i++)
    {
        d[i]=d[i-1]+d[i-2];
        d[i]%=1234567;
    }
    answer=d[n];
    return answer;
}