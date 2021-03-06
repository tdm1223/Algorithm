// 소수 찾기
// 2019.06.28
int prime[1000001]; // prime[i] : i가 소수라면 0, 소수가 아니라면 1
int solution(int n)
{
	int answer = 0;
	prime[0] = 1; // 0은 소수가 아님
	prime[1] = 1; // 1은 소수가 아님
	prime[2] = 0; // 2는 소수
	for (int i = 2; i < 1000001; i++)
	{
		for (int j = i + i; j < 1000001; j += i)
		{
			prime[j] = 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (prime[i] == 0)
		{
			answer++;
		}
	}
	return answer;
}
