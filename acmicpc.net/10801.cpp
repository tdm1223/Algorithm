// 10801. 카드게임
// 2019.09.07
// 입문용
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> a(10);
	vector<int> b(10);
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> b[i];
	}

	int acnt = 0;
	int bcnt = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			acnt++;
		}
		else if (b[i] > a[i])
		{
			bcnt++;
		}
	}
	if (acnt > bcnt)
	{
		cout << "A" << endl;
	}
	else if (bcnt > acnt)
	{
		cout << "B" << endl;
	}
	else
	{
		cout << "D" << endl;
	}
	return 0;
}
