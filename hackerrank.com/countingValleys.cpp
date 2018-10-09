//https://www.hackerrank.com/challenges/counting-valleys
int countingValleys(int n, string s)
{
	int valley = 0;
	int level = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'U')
		{
			level++;
		}
		if (s[i] == 'D')
		{
			level--;
		}
		if (level == 0 && s[i] == 'U')
		{
			valley++;
		}
	}
	return valley;
}
