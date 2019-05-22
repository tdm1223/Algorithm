// 10886. 0 = not cute / 1 = cute
// 2019.05.22
// 구현
#include<iostream>

using namespace std;

int main()
{
	int n, que;
	int cute = 0;
	int notCute = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> que;
		if (que == 1)
		{
			cute++;
		}
		else if (que == 0)
		{
			notCute++;
		}
	}

	if (cute > notCute)
	{
		cout << "Junhee is cute!" << endl;
	}
	else
	{
		cout << "Junhee is not cute!" << endl;
	}
	return 0;
}
