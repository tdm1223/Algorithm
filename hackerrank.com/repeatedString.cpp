//https://www.hackerrank.com/challenges/repeated-string
long repeatedString(string s, long n)
{
	long count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a')
		{
			count++;
		}
	}
	long a = n / s.size();
	long b = n % s.size();
	count *= a;
	for (int i = 0; i < b; i++)
	{
		if (s[i] == 'a')
		{
			count++;
		}
	}
	return count;
}
