// 다음 큰 숫자
// 2019.09.19
#include<string>
#include<vector>

using namespace std;
// 10진수 -> 2진수로 바꿀때 1의 개수
int decTobin(int n)
{
    int ans = 0;
    while(n>0)
    {
        if(n%2==1)
        {
            ans++;
        }
        n/=2;
    }
    return ans;
}
int solution(int n)
{
    int answer = 0;
    int x = decTobin(n);
    int y = 0;

    // n의 값을 증가시키면서 처음 n의 값의 1의 개수와 같은지 확인
    while(1)
    {
        y = decTobin(++n);
        if(x==y)
        {
            answer=n;
            break;
        }
    }
    return answer;
}
