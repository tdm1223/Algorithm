// 2490. 윷놀이
// 2018.12.08
#include<iostream>

using namespace std;

int main()
{
	int a;
	char ans[5] = { 'E','A','B','C','D' }; // 모,도,개,걸,윷 0의 개수로 판별
	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> a;
			if (a == 0)
			{
				count++;
			}
		}
		cout << ans[count] << endl;
	}
	return 0;
}
