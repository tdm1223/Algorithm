// 15820. 맞았는데 왜 틀리죠?
// 2019.08.24
// 입문용
#include<iostream>

using namespace std;

int main()
{
	int s1, s2;
	cin >> s1 >> s2;

	int type = 0;
	for (int i = 0; i < s1; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a != b)
		{
			type = 1;
		}
	}

	for (int i = 0; i < s2; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a != b)
		{
			if (type == 0)
			{
				type = 2;
			}
		}
	}

	switch (type)
	{
	case 0:
		cout << "Accepted" << endl;
		break;
	case 1:
		cout << "Wrong Answer" << endl;
		break;
	case 2:
		cout << "Why Wrong!!!" << endl;
		break;
	}
	return 0;
}
