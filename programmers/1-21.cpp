//정수 제곱근 판별
long long solution(long long n)
{
	long long answer = -1;
	for (long long i = 1; i*i <= n; i++)
	{
		if (i*i == n)
		{
			answer = (i + 1)*(i + 1);
		}
	}

	return answer;
}
