// 1924. 2007년
// 2019.05.19
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; // 월(month)
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" }; // 요일

	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += month[i];
	}
	sum += y;
	sum %= 7;
	cout << day[sum] << endl;
	return 0;
}
