#include <iostream>

using namespace std;

int time[2000001];
int main()
{
	int n, c;
	cin >> n >> c;

	while (n > 0)
	{
		n--;
		int k;
		cin >> k;
		for (int i = k; i <= c; i += k)
		{
			time[i] = 1;
		}
	}

	int count = 0;
	for (int i = 0; i <= c; i++)
	{
		if (time[i] == 1)
			count++;
	}

	cout << count << endl;

}