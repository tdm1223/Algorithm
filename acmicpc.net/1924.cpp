#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += month[i];
	}
	sum += y;

	sum %= 7;

	cout << day[sum] << endl;
}