// 16674. 2018년을 되돌아보며
// 2019.08.08
// 구현
#include<iostream>

using namespace std;

int num[10];
bool check()
{
	for (int i = 0; i < 10; i++)
	{
		if (num[i] > 0)
		{
			if (i != 0 && i != 2 && i != 1 && i != 8)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	while (n > 0)
	{
		num[n % 10]++;
		n /= 10;
	}
	// 관련 없는 수
	if (!check())
	{
		cout << 0 << endl;
	}
	else
	{
		// 묶여있는 수
		if ((num[2] == num[0] && num[0] == num[1] && num[1] == num[8] && num[8] == num[2]))
		{
			cout << 8 << endl;
		}
		// 밀접한 수
		else if (num[2] != 0 && num[0] != 0 && num[1] != 0 && num[8] != 0)
		{
			cout << 2 << endl;
		}
		// 관련있는 수
		else
		{
			cout << 1 << endl;
		}
	}

	return 0;
}
