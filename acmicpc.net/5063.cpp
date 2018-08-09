#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t > 0) {
		t--;
		long long r, e, c;
		cin >> r >> e >> c;
		if (r < e - c)
		{
			cout << "advertise" << endl;
		}
		else if (r > e - c)
		{
			cout << "do not advertise" << endl;
		}
		else if (r == e - c)
		{
			cout << "does not matter" << endl;
		}
	}

	return 0;

}
