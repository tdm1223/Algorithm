//멀리 뛰기
int d[2001]; //d[i] : i번째 칸에 도달하는 방법의 경우의 수
long long solution(int n)
{
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 1234567;
	}

	return d[n];
}
