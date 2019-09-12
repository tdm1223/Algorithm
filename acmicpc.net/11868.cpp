// 11868. 님 게임 2
// 2019.09.12
// 구현
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		ans ^= k;
	}
	if (ans == 0)
	{
		cout << "cubelover" << endl;
	}
	else
	{
		cout << "koosaga" << endl;
	}
	return 0;
}
