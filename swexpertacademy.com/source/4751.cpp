// 4751. 다솔이의 다이아몬드 장식
// 2019.06.30
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string s;
		cin >> s;
		string ans[5];
		// 맨위, 맨아래
		ans[0] += "..#..";
		for (int i = 1; i < s.size(); i++)
		{
			ans[0] += ".#..";
		}
		ans[4] = ans[0];

		// 위,아래에서 2번째
		ans[1] = ".#.#.";
		for (int i = 1; i < s.size(); i++)
		{
			ans[1] += "#.#.";
		}
		ans[3] = ans[1];

		// 가운데 줄
		ans[2] = "#.";
		ans[2] += s[0];
		ans[2] += ".#";
		for (int i = 1; i < s.size(); i++)
		{

			ans[2] += ".";
			ans[2] += s[i];
			ans[2] += ".#";

		}

		for (int i = 0; i < 5; i++)
		{
			cout << ans[i] << endl;
		}
	}
	return 0;
}
