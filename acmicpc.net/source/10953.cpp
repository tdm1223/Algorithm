// 10953. A+B-6
// 2019.05.22
// 수학
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		string s;
		cin >> s;
		int a = s[0] - '0';
		int b = s[2] - '0';
		cout << a + b << endl;
	}
	return 0;
}
