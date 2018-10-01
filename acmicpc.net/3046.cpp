// 3046. R2
#include <iostream>

using namespace std;

int main()
{
	int r1, s;
	cin >> r1 >> s;

	// s = (r1+r2)/2
	int r2 = 2 * s - r1;

	cout << r2 << endl;
	return 0;
}
