#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		if (x % 2 == 1)
		{
			count++;
		}
		x /= 2;
	}
	cout << count << endl;
}