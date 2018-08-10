#include<iostream>
#include<vector>
using namespace std;
int ability[4];
int a1;
int power = 0;
int main() {
	int T;
	cin >> T;
	while (T--)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> ability[i];
		}
		for (int i = 0; i < 4; i++)
		{
			cin >> a1;
			ability[i] += a1;
		}
		if (ability[2] < 0)
			ability[2] = 0;
		if (ability[0] < 1)
			ability[0] = 1;
		if (ability[1] < 1)
			ability[1] = 1;
		power = ability[0] + 5 * ability[1] + 2 * ability[2] + 2 * ability[3];
		cout << power << '\n';

	}
	return 0;
}