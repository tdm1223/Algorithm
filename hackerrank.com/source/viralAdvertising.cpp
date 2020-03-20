//https://www.hackerrank.com/challenges/strange-advertising
// 2018.10.14
int viralAdvertising(int n)
{
    //처음 한번의 값을 기본값으로 시작
    int answer=2;
    int count=2;
    for(int i=1;i<n;i++)//n-1번만큼 실행
    {
        int tmp = (count*3)/2;
        answer+=tmp;
        count=tmp;
    }
    return answer;
}
