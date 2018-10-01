// 2935. 소음
#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main()
{
	string a;
	char op;
	string b;

	cin >> a >> op >> b;
	int as = a.size();
	int bs = b.size();

	vector<char> ans;
	if (op == '+') //+일때
	{
		if (as > bs)
		{
			ans.push_back('1');
			for (int i = 0; i < as - bs - 1; i++)
			{
				ans.push_back('0');
			}
			ans.push_back('1');
			for (int i = 0; i < bs - 1; i++)
			{
				ans.push_back('0');
			}
		}
		else if (as < bs)
		{
			ans.push_back('1');
			for (int i = 0; i < bs - as - 1; i++)
			{
				ans.push_back('0');
			}
			ans.push_back('1');
			for (int i = 0; i < as - 1; i++)
			{
				ans.push_back('0');
			}
		}
		else//두 수의 자릿수가 같다면
		{
			ans.push_back('2');
			for (int i = 0; i < as - 1; i++)
			{
				ans.push_back('0');
			}
		}
	}
	else if (op == '*') //*일때
	{
		ans.push_back('1');
		for (int i = 0; i < as + bs - 2; i++)
		{
			ans.push_back('0');
		}
	}

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i];

	cout << endl;
	return 0;
}
