#include <iostream>

using namespace std;

int main() {

	int t, n, m;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> n >> m;
		int a = n - m;
		cout << m - a <<" "<< a << endl;
	}
	
	return 0;
}