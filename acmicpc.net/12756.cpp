// 12756. 고급 레스토랑
// 2019.08.22
// 입문용
#include<iostream>

using namespace std;

struct player {
	int damage;
	int life;
};
int main()
{
	player a;
	player b;
	cin >> a.damage >> a.life >> b.damage >> b.life;

	while (1)
	{
		a.life -= b.damage;
		b.life -= a.damage;
		if (a.life <= 0)
		{
			if (b.life <= 0)
			{
				cout << "DRAW" << endl;
				break;
			}
			cout << "PLAYER B" << endl;
			break;
		}
		if (b.life <= 0)
		{
			if (a.life <= 0)
			{
				cout << "DRAW" << endl;
				break;
			}
			cout << "PLAYER A" << endl;
			break;
		}
	}
	return 0;
}
