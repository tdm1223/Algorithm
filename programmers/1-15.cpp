// 자릿수 더하기
// 2019.03.08
int solution(int n)
{
	int answer = 0;
	while (n>0)
	{
		answer += (n % 10);
		n /= 10;
	}
	return answer;
}
