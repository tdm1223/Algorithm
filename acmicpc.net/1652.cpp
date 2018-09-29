// 1652. 누울 자리를 찾아라
#include <iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string a[101];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int horizontal = 0;
	//가로로 누울 수 있는 자리
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '.')
				cnt++;
			else if (a[i][j] == 'X' && cnt >= 2)
			{
				horizontal++;
				cnt = 0;
			}
			else if (a[i][j] == 'X')
				cnt = 0;
		}
		if (cnt >= 2)
			horizontal++;
	}

	int vertical = 0;
	//세로로 누울 수 있는 자리
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j][i] == '.')
				cnt++;
			else if (a[j][i] == 'X' && cnt >= 2)
			{
				vertical++;
				cnt = 0;
			}
			else if (a[j][i] == 'X')
				cnt = 0;
		}
		if (cnt >= 2)
			vertical++;
	}
	cout << horizontal << " " << vertical << endl;
	return 0;
}
