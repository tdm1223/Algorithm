// 10797. 10부제
#include <iostream>

using namespace std;

int a[5];
int main()
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (a[i] == n)
		{
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
