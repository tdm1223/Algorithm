// 5622. 다이얼
#include <iostream>
#include <string>

using namespace std;
int main() {
	string a;

	cin >> a;
	int cnt = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (('A' <= a[i] && a[i] <= 'C')) cnt += 3;
		if (('D' <= a[i] && a[i] <= 'F')) cnt += 4;
		if (('G' <= a[i] && a[i] <= 'I')) cnt += 5;
		if (('J' <= a[i] && a[i] <= 'L')) cnt += 6;
		if (('M' <= a[i] && a[i] <= 'O')) cnt += 7;
		if (('P' <= a[i] && a[i] <= 'S')) cnt += 8;
		if (('T' <= a[i] && a[i] <= 'V')) cnt += 9;
		if (('W' <= a[i] && a[i] <= 'Z')) cnt += 10;
	}

	cout << cnt << endl;
}
