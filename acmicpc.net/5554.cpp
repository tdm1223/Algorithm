#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int sum = a + b + c + d;

	cout << sum/60 << endl << sum%60 << endl;
	return 0;
}