// 12790. Mini Fantasy War
// 2018.10.16
#include<iostream>

using namespace std;

int ability[4];
int main()
{
	int t;
	cin >> t;
	while (t>0)
	{
		t--;
		for (int i = 0; i < 4; i++)
		{
			cin >> ability[i];
		}
		for (int i = 0; i < 4; i++)
		{
			int a;
			cin >> a;
			ability[i] += a;
		}
		if (ability[2] < 0)//공격력
		{
			ability[2] = 0;
		}
		if (ability[0] < 1)//HP
		{
			ability[0] = 1;
		}
		if (ability[1] < 1)//MP
		{
			ability[1] = 1;
		}
		int power = ability[0] + 5 * ability[1] + 2 * ability[2] + 2 * ability[3];
		cout << power << '\n';
	}
	return 0;
}
