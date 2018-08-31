//소수 찾기
#include <string>
#include <vector>

using namespace std;
int pri[1000001];
int solution(int n) {
    int answer = 0;
    pri[0]=pri[1]=1;
    pri[2]=0;
    for(int i=2;i<1000001;i++)
    {
        for(int j=i+i;j<1000001;j+=i)
            pri[j]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(pri[i]==0) answer++;
    }
    return answer;
}