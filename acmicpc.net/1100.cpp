// 1100. 하얀 칸
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	char arr[9][9];
	for (int i = 0; i < 8; i++)
		cin >> arr[i];
	int cnt = 0;

	for (int i = 0; i < 8; i += 2)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j % 2 == 0 && arr[i][j] == 'F')
			{
				cnt++;
			}
		}
	}
	for (int i = 1; i < 9; i += 2)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j % 2 == 1 && arr[i][j] == 'F')
			{
				cnt++;
			}
		}
	}

	cout << cnt << endl;
	return 0;
}
