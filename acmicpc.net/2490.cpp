//2490. 윷놀이
#include <iostream>

using namespace std;


int main()
{
	int a;
	char ans[5] = { 'E','A','B','C','D' };
	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> a;
			if (a == 0) count++;
		}
		cout << ans[count] << endl;
	}
}
