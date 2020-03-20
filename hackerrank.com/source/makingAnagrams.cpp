//https://www.hackerrank.com/challenges/making-anagrams
int makeAnagram(string a, string b)
{
	int count = 0;
	vector<int> v(26, 0);
	for (int i = 0; i < a.size(); i++)
	{
		++v[a[i] - 'a'];
	}
	for (int i = 0; i < b.size(); i++)
	{
		--v[b[i] - 'a'];
	}
	for (int i = 0; i < 26; i++)
	{
		count += abs(v[i]);
	}
	return count;
}
