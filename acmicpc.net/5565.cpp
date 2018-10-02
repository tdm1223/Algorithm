// 5565. 영수증
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	for (int i = 0; i < 9; i++)
	{
		cin >> b;
		a -= b;
	}
	
	cout << a << endl;
	return 0;
}
