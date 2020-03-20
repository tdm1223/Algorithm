// 약수의 합
// 2019.06.28
int solution(int n)
{
	int answer = 0;
	for (int i = 1; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			answer += i;
			answer += (n / i);
			if (i == (n / i)) // 제곱근일땐 두번을 더했으니 한번을 빼준다.
			{
				answer -= i;
			}
		}
	}
	return answer;
}
