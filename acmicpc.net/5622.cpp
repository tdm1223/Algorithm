// 5622. 다이얼
// 2018.12.16
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int ans = 0;

	// 문자에 따라 ans에 값 추가
	for (int i = 0; i < a.size(); i++)
	{
		if (('A' <= a[i] && a[i] <= 'C'))
		{
			ans += 3;
		}
		if (('D' <= a[i] && a[i] <= 'F'))
		{
			ans += 4;
		}
		if (('G' <= a[i] && a[i] <= 'I'))
		{
			ans += 5;
		}
		if (('J' <= a[i] && a[i] <= 'L'))
		{
			ans += 6;
		}
		if (('M' <= a[i] && a[i] <= 'O'))
		{
			ans += 7;
		}
		if (('P' <= a[i] && a[i] <= 'S'))
		{
			ans += 8;
		}
		if (('T' <= a[i] && a[i] <= 'V'))
		{
			ans += 9;
		}
		if (('W' <= a[i] && a[i] <= 'Z'))
		{
			ans += 10;
		}
	}

	cout << ans << endl;
	return 0;
}
