// 2908. 상수
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	swap(a[0], a[2]);
	swap(b[0], b[2]);

	int c = stoi(a);
	int d = stoi(b);
	int res = c > d ? c : d;
	cout << res << endl;


	return 0;
}
