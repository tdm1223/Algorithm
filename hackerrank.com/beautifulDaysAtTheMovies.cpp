//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies
int beautifulDays(int i, int j, int k)
{
	int ans = 0;
	for (int a = i; a <= j; a++)
	{
		int b = 0;
		int tmp = a;
		while (1)//숫자를 역으로 바꾸는 과정
		{
			b += (tmp % 10);
			tmp /= 10;
			if (tmp <= 0)
			{
				break;
			b *= 10;
		}
		if (abs(a - b) % k == 0) //정수인지 체크
		{
			ans++;
		}
	}
	return ans;
}
