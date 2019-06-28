// 정수 제곱근 판별
// 2019.06.28
long long solution(long long n)
{
	long long answer = -1;
	// 제곱인지 찾기
	for (long long i = 1; i*i <= n; i++)
	{
		if(i*i == n)
		{
			// 찾았다면 x+1의 제곱 리턴
			answer = (i + 1)*(i + 1);
		}
	}
	return answer;
}
