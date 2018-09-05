// 숫자의 표현
using namespace std;

int solution(int n)
{
    int answer = 0;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=i;sum<=n;j++)
        {
            sum+=j;
            if(sum==n)
            {
                answer++;
            }
        }
    }
    return answer;
}
