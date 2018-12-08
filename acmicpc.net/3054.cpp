// 3054. 피터팬 프레임
// 2018.12.08
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string ans[5];
	int size = s.size();

	// 첫 번째와 마지막 줄
	ans[0] = "..#..";
	for (int i = 1; i < size; i++)
	{
		// 피터팬 프레임
		if (i % 3 != 2)
		{
			ans[0] += ".#..";
		}
		// 웬디 프레임
		else
		{
			ans[0] += ".*..";
		}
	}
	ans[4] = ans[0];

	// 두 번째와 네 번째 줄
	ans[1] = ".#.#.";
	for (int i = 1; i < size; i++)
	{
		// 피터팬 프레임
		if (i % 3 != 2)
		{
			ans[1] += "#.#.";
		}
		// 웬디 프레임
		else
		{
			ans[1] += "*.*.";
		}
	}
	ans[3] = ans[1];

	// 가운데 줄
	ans[2] = "#.";
	ans[2] += s[0];
	ans[2] += ".#";
	for (int i = 1; i < size; i++)
	{
		if (i % 3 == 1)
		{
			ans[2] += ".";
			ans[2] += s[i];
			if (i == size - 1)
			{
				ans[2] += ".#";
			}
			else
			{
				ans[2] += ".*";
			}
		}
		else if (i % 3 == 2)
		{
			ans[2] += ".";
			ans[2] += s[i];
			ans[2] += ".*";
		}
		else
		{
			ans[2] += ".";
			ans[2] += s[i];
			ans[2] += ".#";
		}
	}
	// 출력
	for (int i = 0; i < 5; i++)
	{
		cout << ans[i] << "\n";
	}
	return 0;
}
