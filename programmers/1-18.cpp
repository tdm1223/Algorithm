// 약수의 합
#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            answer+=i;
            answer+=(n/i);
            if(i==(n/i)) answer-=i;
        }
    }
    return answer;
}
